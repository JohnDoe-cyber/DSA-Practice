#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);

    unsigned long long number_of_squre_dueto_n = n/a;
    unsigned long long number_of_squre_dueto_m = m/a;
    
    if ((n%a != 0) && (m%a != 0)){
        number_of_squre_dueto_n += 1;
        number_of_squre_dueto_m += 1;
    }
    unsigned long long total_squre_coount = number_of_squre_dueto_m*number_of_squre_dueto_n;

    // cout<<total_squre_coount<<endl;
    printf("%llu", total_squre_coount);


    return 0;
}

