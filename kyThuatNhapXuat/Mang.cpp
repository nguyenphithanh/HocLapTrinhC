#include<stdio.h>
typedef struct Numbers{
    int a[100];
    int n;
};
// nhap tu man hinh console
void nhap(Numbers &numbers){
    int temp;
    printf("nhap n:");
    scanf("%d",&numbers.n);
    printf("Nhap cac phan tu:\n");
    for(int i=0; i<numbers.n;i++){
        printf("phan tu thu %d: ",i);
        scanf("%d",&temp);
        numbers.a[i]= temp;
    }
}
void xuat(Numbers numbers){
    printf("\n xuat Mang \n");
    for (int i = 0; i < numbers.n; i++)
    {
        printf(" %d ",numbers.a[i]);
    }
    
}
int main(){
    Numbers number;
    nhap(number);
    xuat(number);
    return 0;
}