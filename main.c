#include <stdio.h>
#include <math.h>
int  fac(int par){
    printf("entered fac\n");
    int i;
    printf("par gotten %d\n",par);
    int sum = 1;
    for(i = 1; i <= par; i++){
        sum = sum * i;
    }
    printf("factorial %d\n",sum);
    return sum;
}


int main(void){
    const double pi = 3.1415;
    double deg;
    double rad;
    int is_True = 0;
    do{
        printf("give deg\n");
        scanf("%lf",&deg);
        rad = deg * pi/180;
        printf("%lf\n",rad);
        if(rad > 0 && rad < 2 * pi){
            printf("btwn 0 and 2p\n");
            is_True = 1;

        }
    }
    while(is_True == 0);

    int par = 3;
    double sin = rad;
    double tempc;
    double templ = 0;
    int pros = 1;
    do{
        printf("enter do\n");
        tempc = (pow(rad,(par)) / (fac(par)));
        printf("%lf is the temp\n",tempc);
        sin = sin - (tempc * pros);
        pros = pros * (-1);
            if(templ - tempc < pow(10,-6)) {
                printf("sin(x) calculated succesfully\n");
            }
            else{
                templ = tempc;
            }
            par += 2;
    }while(tempc - templ >= pow(10, -6));
    printf("%lf is sin", sin);

}



