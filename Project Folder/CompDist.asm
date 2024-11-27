section .data
VECTOR_SIZE DQ 0
DIFFERENCE_X DQ 0
DIFFERENCE_Y DQ 0

section .text
bits 64
default rel
global CompDist

CompDist:
	; PUSH RSI AND RBP
	PUSH RSI
	PUSH RBP
	MOV RBP, RSP
	ADD RBP, 16
	
	; STORE ADDRESS	
	MOV RAX, [RBP + 48]
	MOV QWORD[VECTOR_SIZE], RAX
	
	MOV RBX, [RBP + 40]

	; LOOPING
	MOV R15, QWORD[VECTOR_SIZE]
	MOV R14, 0
	L1:
		MOVSD XMM0, [RCX]
		MOVSD XMM1, [RDX]
		MOVSD XMM2, [R8]
		MOVSD XMM3, [R9]
		
		; COMPUTE DIFFERENCE
		SUBSD XMM1, XMM0
		MOVSD QWORD[DIFFERENCE_X], XMM1
		
		SUBSD XMM3, XMM2
		MOVSD QWORD[DIFFERENCE_Y], XMM3
		
		; COMPUTE SQUARED VALUES
		MOVSD XMM0, QWORD[DIFFERENCE_X]
		MULSD XMM0, QWORD[DIFFERENCE_X]
		
		MOVSD XMM1, QWORD[DIFFERENCE_Y]
		MULSD XMM1, QWORD[DIFFERENCE_Y]
		
		; ADD VALUES
		ADDSD XMM0, XMM1

		; GET SQUARE ROOT
		SQRTSD XMM1, XMM0

		; STORE IN RESULT VECTOR
		MOVSD [RBX], XMM1

		; UPDATE ADDRESS FOR NEXT ITERATION
		ADD RCX, 8
		ADD RDX, 8
		ADD R8, 8
		ADD R9, 8
		ADD RBX, 8
		
		; LOOP CONTROL
		INC R14
		CMP R14, QWORD[VECTOR_SIZE]
		JE EL1
	JMP L1
	EL1:
	
	; POP RSI AND RBP
	POP RBP
	POP RSI
	RET