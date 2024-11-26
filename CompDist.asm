section .data
RES DQ 0

section .text
bits 64
default rel
global CompDist

CompDist:
	PUSH RSI
	PUSH RBP
	MOV RBP, RSP
	ADD RSP, 16
	
	; MOVE VARIABLES
	LEA RAX, [RBP + 40]
	LEA RES, RAX
	
	POP RBP
	POP RSI
	XOR RAX, RAX
	RET