#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

void readComplexNumber(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imaginary));
}

void writeComplexNumber(Complex c) {
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imaginary);
}

Complex addComplexNumbers(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}

Complex multiplyComplexNumbers(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    product.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Reading Complex Number 1:\n");
    readComplexNumber(&num1);

    printf("\nReading Complex Number 2:\n");
    readComplexNumber(&num2);

    printf("\nComplex Number 1:\n");
    writeComplexNumber(num1);

    printf("\nComplex Number 2:\n");
    writeComplexNumber(num2);

    sum = addComplexNumbers(num1, num2);
    printf("\nSum of Complex Numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(num1, num2);
    printf("\nProduct of Complex Numbers:\n");
    writeComplexNumber(product);

    return 0;
}
