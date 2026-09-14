/******************************************************************************
 Produtório de PI: pi/2 = N ∏ n(1) (4n² / 4n² -1) = ((4/3) * (16/15) * (36/35) * ...)
*******************************************************************************/
# include <stdio.h>

int main()
{
    // Quantidade de termos do Produtório
    int N;
    double produto = 1, pi;
    
    // Pegando a quantidade de termos do Produtório
    printf("Quantidade de termos do Produtório (N): ");
    scanf("%d", &N);
    
    // Iniciando o for para pegar o valor de pi/2
    for (int n = 1; n <= N; n++){
        
    //  Para cada loop do for vou eu vou calcular o termo (4n² / 4n² -1) e multiplica-lo pelo anterior
        produto *= (double)(4 * (n*n)) /  (4 * (n*n) - 1); // Esse (float) aqui serve para jogar todo valor da equação para float, já que algumas das variáveis são inteiras
    }
    
    // Pegando o valor de pi = produto * 2
    pi = produto * 2;
    
    printf("Aproximação de PI para um Produtório de %d termos: %.6lf \n", N, pi);
    
    return 0;
}
