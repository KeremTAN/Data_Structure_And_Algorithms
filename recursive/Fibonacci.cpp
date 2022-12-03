#include<iostream>
#include<vector>

static std::vector<int64_t> F(100, -1);
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

//subproblems solved and recored. Therefore, it can be reused.
int64_t BottomUp_DynamicProgramming_Fibonaci(int64_t n){
    F.clear(); // creta new array or list;
    int64_t f;
    for(int i=0; i<n+1; i++){
        if (i<3)
            f=1;
        else f=F[i-1]+F[i-2];
        F[i]=f;
    }
    return F[n];
}

int main(){
    std::cout<<iterativeFibonaci(45)<<std::endl;
    std::cout<<fibonaci_O_2powN(45)<<std::endl; // my computer is too slow that it more calculate
    std::cout<<fibonaci_O_N(45)<<std::endl;
    std::cout<<BottomUp_DynamicProgramming_Fibonaci(45);
    std::cin.get();
}