#include<iostream>

double eIterativeLinear(int x, int n){
    double s=1;
    for(; n>0; n--){
        s = 1 +x*s/n;
    }
    return s;
}

double eRecursiveLinear(int x, int n){
    static double S=1;
    if(n==0)
        return S;
    S = 1 + x*S/n;
    return eRecursiveLinear(x,n-1);
}

double eQuadratic(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    r=eQuadratic(x,n-1);
    p *= x;
    f *= n;
    return r+p/f;
}

int main(){


    std::cout<< " O(N^2) Spaca(N) " << eQuadratic(4,15) << "\n";

    std::cout<< " O(N) Spaca(N) " << eRecursiveLinear(4,15) << "\n";

    std::cout<< " O(N) Spaca(1) "<< eIterativeLinear(4,15) << "\n";

    std::cin.get();
}