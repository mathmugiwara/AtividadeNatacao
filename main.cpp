#include <iostream>
#include <locale.h>  // inclui uma biblioteca que permite uso de caracteres especiais
using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese"); // possíbilita usar caracteres em português
    int idade;
    do
    {
        cout<<"\n ---------- DESCUBRA SUA CATEGORIA -----------\n";
        cout<<"Digite sua idade:";

        cin>>idade;
        if(idade>=5 && idade<=7)
        {
            cout<<"Categoria infantil, Série A!\n";
            cout<<"Tecle 0 para sair!";   // mostra opção de sair da aplicação.
        }
        else if (idade >=8 && idade <=10)
        {
            cout<<"Categoria infantil, Série B!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if (idade >=11 && idade <=13)
        {
            cout<<"Categoria juvenil, Série A!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if (idade >= 14 && idade <=17)
        {
            cout<<"Categoria juvenil, Série B!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if(idade >=18)
        {
            cout<<"Categoria Adulto!\n";
            cout<<"Tecle 0 para sair!";
        }
        else if(idade == 0){
            cout<<"Obrigado, volte sempre!";  // caso o usuário saia, mostra uma mensagem de despedida
        }
        else
        {
            cout<<"idade apenas acima de 5 anos!"; // caso digite uma idade inválida, mostra essa mensagem.
        }

        }while(idade!=0);  // enquanto não for digitado o 0, vai continuar em looping.
    return 0;
}
