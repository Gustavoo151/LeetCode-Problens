#include <stdio.h>

void notasMoedas(float montante){
    float cedulas[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0}; 
    float moedas[]  = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
    int valorNotas = 0, valorMoedas = 0, contNotas = 0, contMoedas =  0;

    printf("NOTAS:\n");

    while(montante > 0.000011){
        if((cedulas[valorNotas] < montante) && (cedulas[valorNotas] >= 2)){
            montante -= cedulas[valorNotas];
            contNotas++;
        }
        else if (cedulas[valorNotas] >= 2.0){
            printf("%d nota(s) de R$ %.2f\n", contNotas, cedulas[valorNotas]);
            ++valorNotas;
            contNotas = 0;
        }
        else if ((moedas[valorMoedas] <= montante)){
            montante -= moedas[valorMoedas];
            contMoedas++;
        }
        else if (moedas[valorMoedas] >= 0.001){
            printf("%d moedas(s) de R$ %.2f\n", contMoedas, moedas[valorMoedas]);
            ++valorMoedas;
            contMoedas = 0;
        }
        printf("%d\n", contMoedas);
        printf("%.20f\n", montante);
        if ((montante <= 0.000010) && (contMoedas == 0))
            montante = 0;
    }
}


int main(){
    notasMoedas(576.76);
}