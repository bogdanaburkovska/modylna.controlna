 #include <stdio.h>

int main() {
      double x, y, a;
    
    printf("Введіть значення x: ");
    scanf("%lf", &x);//'scanf' використовується для отримання введених значень від користувача.
    
    printf("Введіть значення y: ");
    scanf("%lf", &y);
    
    a = (1 + y) * (x + (y / (x*x + 4))) / (1 + 1 / (x*x + 4));
    
    printf ("%.2f\n", a);//Ця програма припускає, що введені значення 'x' і 'y' коректні. Якщо ви хочете додати перевірку на валідність введених даних, можна використати додаткову логіку для перевірки і виведення повідомлень про помилки, якщо це необхідно.
    
    return 0;
}
