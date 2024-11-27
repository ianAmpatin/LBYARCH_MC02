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

C Kernel Execution Time Average:
<br/>ASM Kernel Execution Time Average: 

### Analysis
Based on their average execution time, we can 