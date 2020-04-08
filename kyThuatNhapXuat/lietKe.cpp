#include<stdio.h>
#include<math.h>
typedef struct Range
{
    float x;
    float y;
};
void enterNumbers(int numbers[],int &sizeOfNumber){
    int temp;
    printf("enter value of n:");
    scanf("%d",&sizeOfNumber);
    printf("enter value of real numbers: \n");
    for(int i=0;i<sizeOfNumber;i++){
        printf("enter value of real number at %d: ",i);
        scanf("%d",&temp);
        numbers[i] = temp;
    }
}
void enterNumbers(float numbers[],int &sizeOfNumber){
    float temp;
    printf("enter value of n:");
    scanf("%d",&sizeOfNumber);
    printf("enter value of real numbers: \n");
    for(int i=0;i<sizeOfNumber;i++){
        printf("enter value of real number at %d: ",i);
        scanf("%f",&temp);
        numbers[i] = temp;
    }
}
void enterRange(Range &range){
    printf("\nEnter value of range:");
    scanf("%f%f",&range.x,&range.y);
}
int isNumberInRange(float number, Range range){
    return number>=range.x && number<= range.y;
}
int isSymmetricNumber(int number){
    int flag = 1;
    return flag;
}
void listNegativeNumbers(float numbers[],int n){
    int flag = 0;
    printf("\nListing nagative numbers: ");
    for(int i=0;i<n;i++){
        if(numbers[i]<0){
            printf(" %.2f ",numbers[i]);
            flag = 1;
        }
    }
    if(!flag){
        printf("Don\'t have negative numbers!");
    }
}
void listPositiveNumbers(float numbers[],int sizeOfNumber){
    int flag = 0;
    printf("\nListing positive numbers: ");
    for(int i=0; i<sizeOfNumber; i++){
        if(numbers[i]>0){
            printf("%.2f ",numbers[i]);
            flag = 1;
        }
    }
    if(!flag){
        printf("Don\'t have positive numbers ");
    }
}
void listNumbersInRange(float numbers[],int sizeOfNumbers,Range range){
    int flag = 0;
    printf("\nListing numbers in range: ");
    for(int i=0; i<sizeOfNumbers; i++){
        if(isNumberInRange(numbers[i],range)){
            printf("%.2f ",numbers[i]);
            flag = 1;
        }
    }
    if(!flag){
        printf("Don\'t have numbers in range");
    }
}
void listPositiveNumbersDivisible(int numbers[],int sizeOfNumbers,float number){
    int flag = 0;
    printf("\nListing positive  numbers divisible 7: ");
    for(int i=0;i<sizeOfNumbers;i++){
        if(numbers[i]>0 && numbers[i]%7==0){
            printf("%d",numbers[i]);
            flag = 1;
        }
    }
    if(!flag){
        printf("Don\'t have number in divisible");
    }
}
void listSymmetricNumbers(int numbers[], int sizeOfNumbers){
    int flag =0;
     printf("\nListing symmetric  numbers: ");
    for(int i=0;i<sizeOfNumbers;i++){
        if(isSymmetricNumber(numbers[i])){
            printf("%d ",numbers[i]);
            flag = 1;
        }
    }
    if(!flag){
        printf("Don\'t have symmetric number!");
    }
}

int main(){
    int sizeOfNumbers;
    int numbers[100];
    // list symmetric numbers
    enterNumbers(numbers,sizeOfNumbers);
    listSymmetricNumbers(numbers,sizeOfNumbers);
    return 0;
}