#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
    int checkin, tempo, qnt_pessoas, servico, pedido;
    char nome [40], sobrenome [40], cpf[11];
    } Hotel;

int numCliente = 0, opcao;
Hotel hotel[10];

void cadastrarCliente();
void pedirServiço();
void fazerPedido();


int main() {
	setlocale(LC_ALL,"");
	
	int opcao = 0;
	
	do{
        printf(" * Hotel Transilvania *\n");
        printf("1 - Fazer o Checkin\n");
        printf("2 - Pedir um Serviço\n");
        printf("3 - Fazer um Pedido\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
            switch (opcao){
            case 1:
                cadastrarCliente();
               
                break;
            
             case 2:
            pedirServiço();

	    printf ("\n Sua solicitação foi feita, estamos trabalhando para realizar o serviço o mais rapido possivel!\n");
	    printf ("Qual dúvida estamos a disposição!\n");
            break;
            
             case 3:
             fazerPedido();
             printf ("Os pratos estão sendo feitos!\n");
	         printf ("Se precisar de mais alguma coisa é só nos informar.\n");
            break;
            
            
             case 0:
             printf("Hotel Transilvania sempre as ordens!\n");
            break;
            
            default:
            printf ("\n Opcao Invalida!\n");
            break;
            
        }

    }while(opcao != 0);


    return 0;
}

void cadastrarCliente(){
    system("clear");
    printf(" * CHECKIN *\n");
   	printf ("Sejam bem vindos ao hotel Transilvania, vamos realizar seu checkin.\n ");
	printf("Informe o seu primeiro nome, por favor.\n");
	scanf ("%s", hotel[numCliente].nome);
    printf("Informe o seu sobrenome.\n");
	scanf ("%s", hotel[numCliente].sobrenome);
	printf ("Qual sua data de nascimento?\n");
	scanf ("%d", &hotel[numCliente].checkin);
	printf("Qual seu cpf?\n");
	scanf("%s", hotel[numCliente].cpf);
	printf ("Deseja fazer uma rezerva para quantas pessoas?\n");
	scanf ("%d",&hotel[numCliente].qnt_pessoas);
	printf ("Quanto tempo deseja ficar?\n");
	scanf ("%d", &hotel[numCliente].tempo);
	printf ("Checkin conluído, aproveite a estadia!\n");
	 numCliente++;
    void finalizaFuncao();
}
 
  
  
void pedirServiço(){
        system("clear");
        printf(" * SERVIÇOS *\n");
	    printf ("informe qual serviço você deseja:\n");
	    printf ("1 - Arrumar o Quarto\n");
	    printf ("2 - Limpeza Geral\n");
	    printf ("3 - Recolher o lixo\n");
	    scanf ("%d", &opcao);
    void finalizaFuncao();
}


void fazerPedido(){
        system("clear");
        printf(" * PEDIDOS *\n");
	    printf ("Informe qual pedido você deseja:\n");
	    printf ("1 - Café da Manhã\n");
	    printf ("2 - Almoço\n");
	    printf ("3 - Janta\n");
	    scanf ("%d", &opcao);
	     void finalizaFuncao();
    
}

 void finalizaFuncao(){
    printf("\n Enter para continuar...");
    getchar();
    getchar();
    system("clear");
}