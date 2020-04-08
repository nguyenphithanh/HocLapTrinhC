#include<stdio.h>
#include<math.h>
typedef struct Complex{
    float real;
    float imaginary;
};
typedef struct Complexes{
    int n;
    Complex complexs[100];
 };
void enterComplex(Complex &complex){
    printf("enter real part:");
    scanf("%f",&complex.real);
     printf("enter imanigary part:");
    scanf("%f",&complex.imaginary);
}
void outputComplex(Complex complex){
    printf("%.2f + %.2fi",complex.real,complex.imaginary);
}
void enterComplexes(Complexes &complexes){
    Complex temp;
    printf("enter value of n: ");
    scanf("%d",&complexes.n);
    for(int i=0;i<complexes.n;i++){
        printf("enter value of complexes at %d: \n",i);
        enterComplex(temp);
        complexes.complexs[i] = temp;
    }
}
void outputComlexes(Complexes complexes){
    for(int i=0;i<complexes.n;i++){
        printf("\n");
        outputComplex(complexes.complexs[i]);
    }
}
Complex addComplexes(Complex a, Complex b){
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
Complex minusComplexes(Complex a, Complex b){
    Complex result;
    result.real = a.real - b.real;
    result.imaginary=a.imaginary - b.imaginary;
    return result;
}
Complex multiplyComplexes(Complex a, Complex b){
    Complex result;
    result.real = a.real*b.real - a.imaginary*b.imaginary;
    result.imaginary = a.real*b.imaginary + a.imaginary*b.real;
    return result; 
}
Complex divideComplexes(Complex a, Complex b){
    Complex result;
    result.real = (a.real*b.real + a.imaginary*b.imaginary)/(pow(b.real,2)+pow(b.imaginary,2));
    result.imaginary = (b.real*a.imaginary - b.imaginary*a.real)/(pow(b.real,2)+pow(b.imaginary,2));
    return result;
}
int main(){
    Complexes complexes;
    enterComplexes(complexes);
    outputComlexes(complexes);
    return 0;
}
