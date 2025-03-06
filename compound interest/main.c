#include <stdio.h>
#include <math.h>  // Include math.h for pow()

int main()
{
    int principal_amount=1200;
    int time_period=2;
    float interest_rate=(5.4/100);
    int N=1;// Number of times interest is compounded per year
    float compound_interest,final_amount;
    final_amount = principal_amount*pow((1+(interest_rate/N)),N*time_period);
    compound_interest = final_amount - principal_amount;

    printf("compound interest:%f",compound_interest);
    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main() {
    double result = pow(2, 3);  // 2^3 = 8
    printf("2^3 = %.2f\n", result);
    return 0;
}
*/
