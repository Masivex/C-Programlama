#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i = 1;
    int carpim = 1;

    printf("Kac Faktoriyeli hesaplamak istersiniz? :");
    scanf("%d",&N);

    if(N > 0){
        while(i <= N){
                carpim = carpim * i;

                i++;
        }
        printf("%d Faktoriyel : %d",N,carpim);
    }
    else{
        printf("Lutfen N > 0 olacak bicimde bir sayi giriniz !!!");
    }
    return 0;
}
