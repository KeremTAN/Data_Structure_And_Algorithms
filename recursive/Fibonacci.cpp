#include<iostream>
#include<vector>

static std::vector<int64_t> F;
int64_t fibonaci_O_N(int64_t n){
    // Memoization
    if(n>1){
        if (F[n-2]==-1)
            F[n-2] = fibonaci_O_N(n-2);
        if (F[n-1]==-1)
            F[n-1] = fibonaci_O_N(n-1);
        return F[n-2] + F[n-1];        
    }
    F[n]=n;
    return n;
}


int64_t fibonaci_O_2powN(int64_t n){
    //Tree recursion
    if(n>1){
        return fibonaci_O_2powN(n-2) + fibonaci_O_2powN(n-1);
    }
    return n;
}

int64_t iterativeFibonaci(int64_t n){
    int64_t sum=0, temp0=0, temp1=1;
    for(int i=2; i<n+1; i++){
        sum=temp0+temp1;
        temp0=temp1;
        temp1=sum;
    }
    return sum;
}

int main(){
    //---------------
    int num =100, i=0;
    F.reserve(num);
    while(i++ < num)
        F.emplace_back(-1);  
    //---------------
    std::cout<<iterativeFibonaci(num)<<std::endl;
    std::cout<<fibonaci_O_2powN(45)<<std::endl; // my computer is too slow that it more calculate
    std::cout<<fibonaci_O_N(num);
    std::cin.get();
}