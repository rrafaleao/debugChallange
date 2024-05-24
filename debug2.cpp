int main() {    

    //poderia usar o namespace std para ficar mais simples o codigo; 
    //faltou o #include <iostream>

    int num = 10;
    if (num = 10){cout << "O número é igual a 10." << std::endl;
    //Esse if não é necessario, porque já esta determinado que o numero é 10
    } else {
        //Não tem como cair nesse else;

        std::cout << "O número não é igual a 10." << std::endl;}


    std:cout << "Este é um código com erros" << endl;
    std:cout << "Revise o código e aponte os erros" std::endl;
    //Essa mensagem vai aparecer independente do codigo ter funcionado ou não
    
    //Precisa do ponto e virgula no final dos endl

    return 0;


}