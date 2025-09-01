/* Q9-> program in c to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h> // for pow() function

int main() {
    double principal, rate, time, simpleInterest, compoundInterest, amount;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2lf", simpleInterest);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);

    return 0;
}
