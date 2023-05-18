#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s;

    printf("Введіть довжину першого катету: ");
    scanf("%f", &a);

    printf("Введіть довжину другого катету: ");
    scanf("%f", &b);

    // Знаходимо гіпотенузу за теоремою Піфагора
    c = sqrt(a*a + b*b);
  if(a<0 || b<0){
    printf ("Такого трикутника немає");
  }
    printf("Гіпотенуза трикутника дорівнює: %.2f\n", c);

    // Знаходимо площу трикутника
    s = 0.5 * a * b *sin(90);
    printf("Площа трикутника дорівнює: %.2f\n", s);

    return 0;
}
