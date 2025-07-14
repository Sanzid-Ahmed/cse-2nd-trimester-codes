#include<stdio.h>
int main(){
    int ii=0, counti = 0;
    /*int n = 12345;
    while (n != 0) {
       printf ("%d", n % 10);
       count++;
       for(; i<count; i++) {
            printf("%d", n/= 10);
       }
       printf ("\n");
    }

    printf("\n");*/
    for(int n = 12345;n != 0;){
        printf ("%d", n % 10);
        counti++;
        while(ii<counti){
            printf("%d", n/= 10);
            ii++;
        }
        printf ("\n");
    }

    for(int n = 12345;n != 0;){
        printf ("%d", n % 10);
        int i=0, count = 0;
        count++;
        while(i<count){
            printf("%d", n/= 10);
            i++;
        }
        printf ("\n");
    }
    return 0;
}
