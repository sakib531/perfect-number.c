#include<stdio.h>

int main (){
    int n,x,sum=0;
    printf("input the value : ");
    scanf("%i",&n);
    for(x=1;x<n;x++){
            if(n%x==0){
                sum=sum+x;
            }
    }
    if(sum==n && sum>0){
        printf("it's a perfect number");
    }
    else{
        printf("it's not a perfect number");
    }
    return 0;
}

