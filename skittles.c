/* PSET1: "Skittles" do CC50
Feito por: Lucas Scommegna Lopes 
Data: 23/09/2020 */

#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    //seed do gerador pseudo-aletorio de numeros//
    srand(time(NULL));

    //variavel que armazena um numero aleatorio entre [0,1023]//
    int skittles = rand() % 1024;
    
    //Da as instrucoes ao usuario de como o programa funciona de forma descontraida//
    printf("Ola,fulano. Sou uma maquina de Skittles gratis! Entretanto, voce tera que se esforcar para tirar um doce de mim... E uma quantidade entre 0 e 1023, quantos doces voce acha que tenho comigo? Digite quantos doces voce acha que eu tenho:\n");

    //Recebe um valor digitado pelo usuario e o armazena para ser analisado em funcoes comparativas//
    int RespostaDoDoceiro = GetInt();

    /*Um loop que testa pelo menos uma vez uma das quatro condicoes. As tres primeiras sao condicoes testam se a resposta dada pelo usuario e ou menor que zero ou maior que 1023, se a resposta e maior que o numero pseudo-aleatorio gerado,
    ou menor que esse numero, respectivamente. Caso alguma dessas tres condicoes seja satisfeita, o programa transmite uma mensagem na tela do usuario e o usuario devera digitar outro numero. Se o numero fornecido for igual ao numero gerado,
    o loop se encerra e e transmitida uma mensagem ao usuario, encerrando-se o programa.*/
    
    do
    {
        if(RespostaDoDoceiro < 0 || RespostaDoDoceiro > 1023)
        {
            printf("Eu ja te disse que tenho uma quantidade entre 0 e 1023! Tente novamente:\n");
            RespostaDoDoceiro = GetInt();    
        }
        else if(RespostaDoDoceiro > skittles)
        {
            printf("Acho que se voce disser um valor menor que isso talvez voce acerte! Tente novamente:\n");
            RespostaDoDoceiro = GetInt();   
        }
        else if(RespostaDoDoceiro < skittles)
        {
            printf("Errado! Eu tenho mais doces do que isso! Tente novamente:\n");
            RespostaDoDoceiro = GetInt(); 
        }
        
    }while(RespostaDoDoceiro != skittles);

    printf("Parabens! Aqui esta seu doce!\n");

    return 0;
}
//salve scromengndasjgb sou eu dedekio
