
/*  Riya Gharat                    03/12/2015
    N00901846
    6.49
    The value of e is to be estimated using a formula. The program will continue to run until the difference between two successive values of e differs by less than 0.0000001.
*/
#include <stdio.h>
float calculateNFac (int x);

int main(){
        int n = 0;
        double finalNum1 = 10;
        double finalNum2 = 20;

        while (finalNum2 - finalNum1 > 0.0000001){
                finalNum1 = 0;
                finalNum2 = 0;
                for(int i = 0; i <= n; i++) {
                        finalNum1 += (1/calculateNFac(i));
                }
                for(int j = 0; j <= n+1; j++){
                        finalNum2 += (1/calculateNFac(j));
                }
                n++;
        }
        printf("floatnum1 = %.9f \n", finalNum1);
        printf("floatnum2 = %.9f \n", finalNum2);

        printf("%d %d \n",n-2, n-1);
        return 0;
}

float calculateNFac (int x){
        if((x == 0) || (x == 1)){
                return 1;
        }else{
                return (x*calculateNFac(x-1));
        }
}
