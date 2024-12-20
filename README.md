# LBYARCH_MC02

## Execution Time and Analysis

### Execution Time when Vector Size is 2<sup>20

| C Kernel Execution Time   | ASM Kernel Execution Time |
|:--------------------------|:--------------------------|
|0.01	                    |0.002                      |
|0.007	                    |0.004                      |
|0.008	                    |0.003                      |
|0.008	                    |0.003                      |
|0.008	                    |0.002                      |
|0.007	                    |0.002                      |
|0.008	                    |0.002                      |
|0.007	                    |0.003                      |
|0.008	                    |0.003                      |
|0.007	                    |0.003                      |
|0.008	                    |0.002                      |
|0.008	                    |0.002                      |
|0.008	                    |0.002                      |
|0.009	                    |0.002                      |
|0.009	                    |0.002                      |
|0.007	                    |0.004                      |
|0.008	                    |0.002                      |
|0.008	                    |0.002                      |
|0.007	                    |0.004                      |
|0.008	                    |0.002                      |
|0.008	                    |0.002                      |
|0.009	                    |0.001                      |
|0.007	                    |0.003                      |
|0.009	                    |0.002                      |
|0.008	                    |0.003                      |
|0.008	                    |0.003                      |
|0.008	                    |0.003                      |
|0.008	                    |0.002                      |
|0.008	                    |0.003                      |
|0.007	                    |0.002                      |

C Kernel Execution Time Average: `0.007933333`	<br/>
ASM Kernel Execution Time Average: `0.0025`
  
### Execution Time when Vector Size is 2<sup>24

| C Kernel Execution Time   | ASM Kernel Execution Time |
|:--------------------------|:--------------------------|
|0.261	                    |0.061                      |
|0.204	                    |0.086                      |
|0.265	                    |0.068                      |
|0.195	                    |0.058                      |
|0.228	                    |0.063                      |
|0.277	                    |0.068                      |
|0.226	                    |0.065                      |
|0.23	                    |0.045                      |
|0.23	                    |0.073                      |
|0.275	                    |0.083                      |
|0.172	                    |0.073                      |
|0.26	                    |0.054                      |
|0.248	                    |0.059                      |
|0.206	                    |0.043                      |
|0.196	                    |0.061                      |
|0.232	                    |0.053                      |
|0.253	                    |0.074                      |
|0.191	                    |0.045                      |
|0.207	                    |0.063                      |
|0.241	                    |0.06                       |
|0.207	                    |0.057                      |
|0.239	                    |0.063                      |
|0.229	                    |0.068                      |
|0.23	                    |0.064                      |
|0.216	                    |0.054                      |
|0.303	                    |0.052                      |
|0.236	                    |0.078                      |
|0.191	                    |0.091                      |
|0.24	                    |0.055                      |
|0.259	                    |0.065                      |

C Kernel Execution Time Average: `0.231566667`	 <br/>
ASM Kernel Execution Time Average: `0.0634`

### Execution Time when Vector Size is 2<sup>26

| C Kernel Execution Time   | ASM Kernel Execution Time |
|:--------------------------|:--------------------------|
|0.833  	                |0.268                      |
|0.679  	                |0.15                       |
|0.618  	                |0.16                       |
|0.663  	                |0.17                       |
|0.643  	                |0.156                      |
|0.779  	                |0.236                      |
|0.804  	                |0.194                      |
|0.962  	                |0.234                      |
|0.767  	                |0.265                      |
|0.755  	                |0.227                      |
|0.97   	                |0.229                      |
|0.835  	                |0.237                      |
|0.959  	                |0.219                      |
|0.983  	                |0.223                      |
|0.971  	                |0.241                      |
|0.798  	                |0.23                       |
|0.843  	                |0.197                      |
|0.897  	                |0.237                      |
|0.988  	                |0.198                      |
|1.039  	                |0.253                      |
|1.008  	                |0.267                      |
|0.928  	                |0.233                      |
|0.89   	                |0.218                      |
|0.887  	                |0.182                      |
|0.759  	                |0.225                      |
|0.863  	                |0.208                      |
|1.008  	                |0.222                      |
|0.962  	                |0.227                      |
|1.041  	                |0.208                      |
|0.899  	                |0.25                       |


C Kernel Execution Time Average: `0.8677`<br/>
ASM Kernel Execution Time Average: `0.2188`

### Analysis
Benchmarking the C Kernel and the ASM Kernel showed us that the ASM Kernal had a significantly faster execution time. The C Kernel had an average execution time of `0.007933333`, `0.231566667` and `0.8677` for vectors sizes 2<sup> 20</sup>, 2 <sup> 24 </sup> and 2 <sup> 26 </sup>, respectively. Meanwhile the ASM Kernal had an averate execution time of `0.0025`, `0.0634`, and `0.2188` for vector sizes 2<sup> 20</sup>, 2 <sup> 24 </sup> and 2 <sup> 26 </sup>, respectively. With these results, we can state that the ASM Kernel is significanlty faster and more efficient.

## Corectness Check
### Test Cases for Correctness Check

|X1                     |X2                     |Y1                     |Y2                     |Z                      |
|:----------------------|:----------------------|:----------------------|:----------------------|:----------------------|
|18.0419694138889000	|9.0958513064473300	    |8.2706855291114300	    |16.8882409487867000	|12.4215655455932000    |
|30.5714745235401000	|16.6479534243312000	|-7.2281771927091100	|-27.3711339654769000	|24.4867953670893000    |
|26.4832788710272000	|26.2040057220400000	|29.9189772865046000	|19.5674231169806000	|10.3553207201098000    |
|-15.8333457824083000	|25.4033065457938000	|13.2030677138975000	|27.8916464113708000	|43.7746026753971000    |
|6.2193240852400900	    |-14.6326488565510000	|-18.0105035700035000	|13.7461298488962000	|37.9906375527914000    |
|23.4647121830308000	|25.4420395861634000	|27.5829274532271000	|10.4583803477877000	|17.2383275646331000    |
|-1.1373481935777100	|-28.2170707044108000	|-11.2811622256755000	|-24.8219925639619000	|30.2764835724689000    |
|-17.9948731338794000	|-24.7582696037478000	|14.8816932743135000	|-17.5276927559198000	|33.1075797162117000    |
|24.6120126051249000	|-20.3578053570288000	|29.9556983547573000	|12.7044288664056000	|48.1652450062176000    |
|-4.7285411127788900	|17.8374491178857000	|-3.9063646516815100	|-10.7961879130909000	|23.5943548261848000    |
|-6.1334144106650600	|4.5962510003389800	    |18.0756158399842000	|-2.3135700570432600	|23.0400655679545000    |
|8.5115627024431400	    |-8.7585340883643500	|-20.4948168798615000	|26.8376726983212000	|50.3847279722004000    |
|18.1087424344511000	|20.3937382422821000	|-4.5169918796096600	|8.8919041669900200	    |13.6021946402160000    |
|-25.3304390211634000	|-2.0789643590977800	|29.9432381963625000	|-17.4357028019937000	|52.7768426877394000    |
|10.5570351322483000	|24.6663821021184000	|-20.4164896928113000	|13.8373886200068000	|37.0459424415892000    |
|-18.3717103965657000	|27.3715115496210000	|-21.6911272189489000	|25.3486145760627000	|65.6138679103698000    |
|15.8120901977729000	|-12.8154568319797000	|1.2178192246747900	    |9.2133826535007200	    |29.7231472674930000    |
|25.8409736406340000	|-2.9433086227380800	|3.4776315982705500	    |23.8247312439088000	|35.2496719049555000    |
|15.8561834591410000	|29.3934738485928000	|13.4812513180069000	|22.4690888440544000	|16.2492908916966000    |
|20.0409013794937000	|15.1375986158583000	|-22.8807841145777000	|9.6240303082612800	    |32.8725620944744000    |
|-15.9837673905539000	|13.9362878945547000	|8.6956218911908100	    |27.6725178519262000	|35.4306687570038000    |
|-2.1149937028639000	|22.1385047505954000	|27.2524132927242000	|23.4845130175102000	|24.5444343938888000    |
|0.8597142257230670	    |21.9378116535207000	|-8.3607256115009700	|20.7556715677302000	|35.9451078155911000    |
|3.6979036914629100	    |-27.4479922986841000	|-19.5155367538940000	|3.9526308172520100	    |38.9977143711839000    |
|26.7672108505194000	|-11.4274897716452000	|-16.2087839515277000	|-23.6320800181554000	|38.9093880716414000    |
|12.4436873422108000	|-26.3326992697045000	|-5.1197910366453900	|-29.3446186073071000	|45.7214438694254000    |
|30.5372994576222000	|-23.2136056228697000	|-23.2776388380002000	|-25.6637183688962000	|53.8038397560974000    |
|-0.0834989294363236	|4.7276448747877900	    |-23.0154189421528000	|2.7557474144309900	    |26.2164093667238000    |
|9.7707707782095700	    |-6.1560815389430800	|-5.4157454945072500	|-7.7724294225372300	|16.1002665775765000    |
|26.6394374936000000	|-4.4791803708808700	|3.5412500658210400	    |-5.5205327180223200	|32.4111753106417000    |

### Batch File Content
Batch File Content
```
nasm -f win64 CompDist.asm
gcc -c C_ASM.c -o C_ASM.obj -std=c11 -m64
gcc C_ASM.obj CompDist.obj -o C_ASM.exe -m64
C_ASM.exe < test_input.txt > output.txt
```

### C Kernel Check
Content of `output.txt` after Execution with `call_c_kernel` <br/>
!["Image of output.txt After Executing the Batch File"](Images/CC_CKERNEL.png)

### ASM Kernel Check
Content of `output.txt` after Execution with `CompDist` <br/>
![Image of output.txt After Executing the Batch File](Images/CC_ASMKERNEL.png)
