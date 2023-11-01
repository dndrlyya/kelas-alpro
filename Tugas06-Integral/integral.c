#include <stdio.h>


float f(float x) {
    return 10 * x * x * x * x + 4;
}


float trapezoidal(float a, float b, int n) {
    float h = (b - a) / n; 
    float result = 0.5f * (f(a) + f(b));  

    for (int i = 1; i < n; i++) {
        result += f(a + i * h);
    }

    return h * result;
}

int main() {
    float a = 1.0f;  
    float b = 3.0f;  
    int n = 1000;    

    float result = trapezoidal(a, b, n);

    printf("Integral of f(x) over [%.2f, %.2f] is approximately %.4f\n", a, b, result);
    return 0;
}
