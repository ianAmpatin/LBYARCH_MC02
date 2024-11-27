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

### Execution Time when Vector Size is 2<sup>30

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
Benchmarking the C Kernel and the ASM Kernel showed us that the ASM Kernal had a significantly faster execution time. The C Kernel had an average execution time of `0.007933333`, `0.231566667` and `0.8677` for vectors sizes 2<sup> 20</sup>, 2 <sup> 24 </sup> and 2 <sup> 28 </sup>, respectively. Meanwhile the ASM Kernal had an averate execution time of `0.0025`, `0.0634`, and `0.2188` for vector sizes 2<sup> 20</sup>, 2 <sup> 24 </sup> and 2 <sup> 28 </sup>, respectively. With these results, we can state that the ASM Kernel is significanlty faster and more efficient.