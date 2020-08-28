#include <stdio.h>

void calculaSalario();
void printSalario();

int main() {
    double salarioAtual;

    scanf("%lf", &salarioAtual);

    calculaSalario(salarioAtual);
    
    return 0;
}

void calculaSalario(double salario) {
    double newSalary, aumento, taxa;

    if (salario > 2000) {
        taxa = 0.04;
        aumento = salario * taxa;
        newSalary = salario + aumento; 
    } else if (salario > 1200) {
        taxa = 0.07;
        aumento = salario * taxa;
        newSalary = salario + aumento;
    } else if (salario > 800) {
        taxa = 0.10;
        aumento = salario * taxa;
        newSalary = salario + aumento;
    } else if(salario > 400) {
        taxa = 0.12;
        aumento = salario * taxa;
        newSalary = salario + aumento;
    } else {
        taxa = 0.15;
        aumento = salario * taxa;
        newSalary = salario + aumento;
    }

    printSalario(newSalary, aumento, taxa);
}

void printSalario(double salario, double aumento, double taxa) {
    taxa = taxa * 100;
    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", aumento);
    printf("Em percentual: %.0lf %%\n", taxa);
}