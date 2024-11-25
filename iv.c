#include <stdio.h>

#define f(x, y) (x + y)

int main() {
    float x0, y0, xn, h, yn, k1, k2, k3, k4, dy;
    int n;
    printf("Enter x0, y0, xn, and n: ");
    scanf("%f %f %f %d", &x0, &y0, &xn, &n);
    h = (xn - x0) / n;
    for (int i = 0; i < n; i++) {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        dy = (k1 + (2 * k2) + (2 * k3) + k4) / 6;
        yn = y0 + dy;
        x0 = x0 + h;
        y0 = yn;
    }

    printf("\nValue of y at x = %0.2f is %0.3f\n", xn, yn);

    return 0;
}
