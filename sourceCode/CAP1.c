#define ex01
/*
    1 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/
#ifdef ex01

#include <stdio.h>
main()
{
    int _int,dezenas=10,cont=0;
    double _double;
    float _float;
    char _char;
    short _short;
    long _long;

    printf("Digite um valor do tipo 'int': ");
    scanf("%d",&_int);

    printf("Digite um valor do tipo 'float': ");
    scanf("%f",&_float);

    printf("\nDigite um valor do tipo 'double': ");
    scanf("%lf",&_double);

    printf("\nDigite um valor do tipo 'long': ");
    scanf("%d",&_long);

    printf("\nDigite um valor do tipo 'short': ");
    scanf("%d",&_short);

    printf("\nDigite um valor do tipo 'char': ");
    getchar(); _char = getchar();

    printf("\n\t\t%d",dezenas);

    for(dezenas=20;dezenas<70;dezenas+=10)
        {
            printf("%10d",dezenas);
        }

    printf("\n\t");

    for(dezenas=0;dezenas<6;dezenas++)
    {
        printf("1234567890");

    }
    printf("12345");

    printf("\n%13d",_short);
    printf("%20d",_long);
    printf("%20d",_int);

    printf("\n%26.2f",_float);
    printf("%20.2lf",_double);
    printf("%17c\n",_char);

}

#endif // ex01

#ifdef ex02
/*
    2 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.
*/
#include <stdio.h>
main()
{
    int x, y;
    x = y = 0;

    printf("Digite um numero (x): ");
    scanf("%d",&x);

    printf("Digite um numero novamente (y): ");
    scanf("%d",&y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("x: %d",x);
    printf("\ny: %d",y);
}

#endif // ex02

#ifdef ex03
/*
    3 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.
*/
#include <stdio.h>
main()
{
    int segundos=0, minutos=0, horas=0;

    printf("Digite um tempo em segundos: ");
    scanf("%d",&segundos);

    if(segundos>=60)
    {
        minutos = segundos/60;
        segundos -= minutos*60;
    }

    if(minutos>=60)
    {
        horas = minutos/60;
        minutos -= horas*60;
    }

    printf("\nSegundos: %d",segundos);
    printf("\nMinutos: %d",minutos);
    printf("\nHoras/: %d\n",horas);

}

#endif // ex03

#ifdef ex04
/*
    4 - Escreva um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321
*/

#include <stdio.h>
main()
{
    int entrada;
    int auxiliar=0,auxiliar2=0,auxiliar3=0;

    do{

        printf("Digite um numero inteiro de tres (3) digitos: ");
        scanf("%d",&entrada);

        if(entrada>999||entrada<=100)
            printf("Apenas numeros com tres (3) digitos sao permitidos. Tente novamente.\n\n");
        else{

        auxiliar = entrada;
        auxiliar = auxiliar - (entrada/10)*10;

        auxiliar2 = entrada;
        auxiliar2 = (auxiliar2 - (entrada/100)*100)/10;

        auxiliar3 = entrada;
        auxiliar3 = entrada/100;

        printf("\n%d",auxiliar);
        printf("%d",auxiliar2);
        printf("%d\n",auxiliar3);}

    }while(entrada>999||entrada<100);
}
#endif // ex04

#ifdef ex05
/*
    5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser
    decomposto. Escrever o valor lido e a relação de notas necessárias.
*/
#include <stdio.h>

main()
{
    float R$;
    int _100,_50,_10,_1,valor_lido;
    _100=_50=_10=_1=0;

    do{
        printf("Escreva uma quantidade em reais: ");
        scanf("%f",&R$);

        if(R$<0)
            printf("\nDigite uma quantidade posistiva.\n\n");
        else{

        valor_lido = R$;

        if(R$>=100)
        {
            _100 = R$/100;
            R$ -= 100*_100;
        }

        if(R$>=50)
        {
            _50 = R$/50;
            R$ -= 50*_50;
        }

        if(R$>=10)
        {
            _10 = R$/10;
            R$ -= 10*_10;
        }

        if(R$>=1&&R$<=9)
        {
            _1 = R$;
            R$ -= _1;
        }

        printf("\nValor lido: %d",valor_lido);
        printf("\nNotas necessarias: ");
        printf("\n\n100: %d",_100);
        printf("\n50: %d",_50);
        printf("\n10: %d",_10);
        printf("\n1: %d",_1);}
    }while(R$<0);
}

#endif // ex05
