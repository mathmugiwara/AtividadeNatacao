#include <iostream>
#include <locale.h>  // inclui uma biblioteca que permite uso de caracteres especiais
using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese"); // poss�bilita usar caracteres em portugu�s
    int idade;
    do
    {
        cout<<"\n ---------- DESCUBRA SUA CATEGORIA -----------\n";
        cout<<"Digite sua idade:";

        cin>>idade;
        if(idade>=5 && idade<=7)
        {
            cout<<"Categoria infantil, S�rie A!\n";
            cout<<"Tecle 0 para sair!";   // mostra op��o de sair da aplica��o.
        }
        else if (idade >=8 && idade <=10)
        {
            cout<<"Categoria infantil, S�rie B!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if (idade >=11 && idade <=13)
        {
            cout<<"Categoria juvenil, S�rie A!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if (idade >= 14 && idade <=17)
        {
            cout<<"Categoria juvenil, S�rie B!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if(idade >=18)
        {
            cout<<"Categoria Adulto!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if(idade == 0){
            cout<<"Obrigado, volte sempre!";  // caso o usu�rio saia, mostra uma mensagem de despedida
        }
        else
        {
            cout<<"idade apenas acima de 5 anos!"; // caso digite uma idade inv�lida, mostra essa mensagem.
        }

        }while(idade!=0);  // enquanto n�o for digitado o 0, vai continuar em looping.
    return 0;
}
