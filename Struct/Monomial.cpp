// 4* x^4, 5*x^4
typedef struct Monomial
{
    int k;
    int n;
};
void enterMonomial(Monomial &monomial){
    // monomial.k
    //monomial.n
}
void outputMonomial(Monomial monomial){
    // monomal.k *x^ monomial.n
}
// 3* x^4 * 4*x^4 = 12x^8
Monomial multiplyMonomials(Monomial monomial1,Monomial monomial2){
    Monomial monomial;
    monomial.k = monomial1.k * monomial2.k;
    monomial.n = monomial1.n + monomial2.n;
    return monomial;
}
// 2x^3 / 4x^2= (1/2) x^1
Monomial devideMonomials(Monomial monomial1,Monomial monomial2){
    Monomial monomial;
    monomial.k = monomial1.k/monomial2.k;
    monomial.n = monomial1.n - monomial2.n;
    return monomial;
}
Monomial derivativeMomnomial(Monomial monomial){
    Monomial result;
    result.k = monomial.n* monomial.k;
    result.n= monomial.n-1;
    return result;
}
Monomial serivativeMonomial(Monomial monomial, int level){
    Monomial result;
    for(int i=1;i<=level;i++){
         if(level == 1){
              result = serivativeMonomial(monomial);
        } else
        {
            result = serivativeMonomial(result);
        }
    }
    return result;
    
}
float valueOfMonomial(Monomial monomial, float x){
    return monomial.k*pow(x,monomial.n);
}
int main(){
    return 0;
}