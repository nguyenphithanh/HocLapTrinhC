#include<stdio.h>
#include<math.h>
float nhap(int &n){
    printf("nhap n:");
    scanf("%d",&n);
}
float f1(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
float f2(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+=pow(i,2);
    }
    return s;
}
float f3(int n){
    float s = 0;
    for(int i=1;i<=n;i++){
        s+=1/(float)i;
    }
    return s;
}
void xuat(int n){
    printf("f1 = %.2f\n",f1(n));
    printf("f2 = %.2f\n",f2(n));
    printf("f3 = %.2f\n",f3(n));
}
int main(){
    int n;
    float s;
    nhap(n);
    xuat(n);
    return 0;
}