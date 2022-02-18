#include<iostream>

int nested(int n){
    if(n > 100){
        return n-10;
    }
    else{
        return nested(nested(n+11));
    }
}

int main(){
    std::cout<<nested(95)<<std::endl;
    std::cout<<nested(20)<<std::endl;
    std::cin.get();
}