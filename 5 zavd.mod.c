 #include <stdio.h>

int main() {
    double product = 1.0;
    for (int i = 1; i <= 9; i++) {
        double term = i + 0.1 * i;
        product *= term;
    }
    printf("%.2f\n", product);
    return 0;
}
