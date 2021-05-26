# C_split
Implementation of split in c

```
#include <stdio.h>
#include "split.h"

int main(){
    int n=0;
    char *str="hello world"; //input string literal
    char delim=' '; //delimiter

    char **out = split(str, delim, &n);
    for(int i=0; i<n; i+=1){
        printf("%s\n", out[i]);
    }
    free(out);
}
```
