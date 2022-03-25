#include <iostream>
#include <cmath>

double asc(int n);
double des(int n);
const double N = 100;

int main(int argc, char **argv){
    
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    for (int jj = 1; jj <= N; jj++){
        std::cout << jj << '\t' << asc(jj) << '\t' << des(jj) << '\t' << std::fabs(1-asc(jj)/des(jj)) << '\n' ;
    }
    return 0;
}

double asc(int n){
    double mySum = 0.0;
    for (int ii = 1; ii <= n; ii++){
        mySum += 1.0/ii;
    }
    return mySum;
}
double des(int n){
    double mySum = 0.0;
    for (int ii = n; ii >= 1; ii--){
        mySum += 1.0/ii;
    }
    return mySum;
}
