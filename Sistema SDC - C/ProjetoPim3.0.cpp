//SISTEMA SDC PARA O CONTROLE DE ACESSO A UMA PALESTRA(C).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define a 100
#include <time.h>
char nome[a][50];
char email[a][50];
char sob[a][50];
int vetores[100];
int op,aux,j,al,ocupadas;
 int i;
int tel[a];
void cadastro ();
void visualizar();
void pesquisa();
void sorteio();
int main (void) {
	while (op !=5){
	system("Cls");
	printf("\t\t------------SDC------------");
	printf("\n\n\t 1.Realizar Cadastro\n \t 2.Visualizar\n \t 3.Pesquisar\n\t 4.Sorteio\n\t 5.Sair");
	printf("\n\nOP:");
	scanf("%d",&op);
	if(op>5 || op<1){
		printf("\n\t\t\tOpcao Invalida!");
		getchar();
		getchar();
	}
	if(op==1){
		system("Cls");
		printf("-----------Identificacao-------------");
	printf("\n1.Professor\n2.Convidado\n3.PNE\n4.Aluno\n5.Outros\n");
	printf("\nID: ");
	scanf("%d", &aux);	
	}
			switch(op){
				case 1:
					 cadastro();
					 break;
			
				case 2:
					visualizar();
					break;
				case 3:
					pesquisa();
					break;
				case 4:
					sorteio();
					break;
				
	}
	}
}
		void cadastro () {
		
		static int i;
			system("Cls");
			printf("__________________________________________________________");
			printf("\n Primeiro Nome: ");
			scanf("%s", &nome[i]);
			printf("Sobrenome: ");
			scanf("%s",&sob[i]);
			printf("Telefone: ");
			scanf("%d",&tel[i]);
			printf("DIgite o email: ");
			scanf("%s", &email[i]);
			printf("__________________________________________________________\n");
			printf("------------CADASTRO REALIZADO COM SUCESSO-------------");
			getchar();
			getchar();
			
			system("Cls");			
				int pp,e;			
                printf("\n\t\tAs seguintes poltronas estao vazias:\n");   
				printf("(Lembrete: Reservadas:5 primeiras(PNE),6 a 20 Professores, 21 a 35 Convidados.)\n\n");                
                 	printf("A-\t\t\t\t");
	for(al=1;al<=5;al++){
        if(vetores[al]==0){
        	
            printf("|%2d| ",al);
        }
		else{
            printf("|**|");
        }
    }
    printf("\n");
    printf("B-\t");
	for(al=6;al<=20;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|**|");
        }
    }
	   printf("\n");
    printf("C-\t");
	for(al=21;al<=35;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|**|");
        }
    }   
	   printf("\n");
    printf("D-\t");
	for(al=36;al<=50;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|**|");
        }
    }    
	    printf("\n");
    printf("E-\t");
	for(al=51;al<=65;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|**|");
        }
    } 
	   printf("\n");
    printf("F-\t");
	for(al=66;al<=80;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|**|");
        }
    }  
	   printf("\n");

	for(al=81;al<=100;al++){
        if(vetores[al]==0){
            printf("|%2d|-",al);
        }
		else{
            printf("|100|");
        }
    } 
                printf("\n\n");
                printf("----Escolha sua poltrona: ");
                scanf("%d",&al);
                ocupadas++;
                printf("\n|Reservada.|");
                vetores[al]=al;
                getchar();  			
	 //sorteio
 				int sorte;
    			srand( (unsigned)time(NULL) );
  			for(sorte=1 ; sorte <= 1 ; sorte++)  
  	 printf("\n\t\t-----------IMPRESSAO DO TICKET SO UM MOMENTO----------------");
	getchar();
	     
	if(vetores[al]<5){
		system("Cls");
	
	//data e hora
		 time_t data_tempo;
    time(&data_tempo);
      struct tm *tempo= localtime(&data_tempo);
     struct tm *data = localtime (&data_tempo);
			printf("_______________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira A,Poltrona %d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_____________________________");
			getchar();
			i++;
			}
	if(vetores[al]>5 && vetores[al]<20){
			system("Cls");
			
				 time_t data_tempo;
    		time(&data_tempo);
    
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);
			printf("________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira B, Poltrona:%d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n______________________________");
			getchar();
			i++;
	}
	if(vetores[al]>20 && vetores[al]<35){
		system("Cls");
			
			 time_t data_tempo;
    		time(&data_tempo);
    
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);		
			printf("________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira C, Poltrona: %d\n",vetores[al]);			
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_______________________________");
			getchar();
			i++;
	}
	if(vetores[al]>35 && vetores[al]<50){
		system("Cls");
			
			time_t data_tempo;
    		time(&data_tempo);
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);
			printf("_________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira D, Poltrona:%d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_______________________________");
			getchar();
			i++;
	}
		if(vetores[al]>50 && vetores[al]<65){
			system("Cls");
		
			time_t data_tempo;
    		time(&data_tempo);
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);
			printf("_________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira E, Poltrona:%d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_______________________________");
			getchar();
			i++;
			}
	if(vetores[al]>65 && vetores[al]<80){
			system("Cls");
			
			time_t data_tempo;
    		time(&data_tempo);
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);
			printf("_________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira F, Poltrona:%d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_______________________________");
			getchar();
			i++;
			}
			if(vetores[al]>80 && vetores[al]<100){
			system("Cls");
			
			time_t data_tempo;
    		time(&data_tempo);
   				 struct tm *tempo= localtime(&data_tempo);
    			struct tm *data = localtime (&data_tempo);
			printf("_________________________________\n");
			printf("Nome: %s %s",nome[i],sob[i]);
			printf("\nFileira G, Poltrona:%d\n",vetores[al]);
			printf("Numero da Sorte: %d\n", rand());
			printf("\nData: %d/%d/%d",data->tm_mday, data->tm_mon+1, data->tm_year+1900);
   			 printf("\t%i :%i ",tempo->tm_hour, tempo->tm_min);
			printf("\n_______________________________");
			getchar();
			i++;
			}
	}
	void visualizar(){
				system("Cls");
				printf("\t\t--------VISUALIZAR---------\n");
				printf("__________________________________________________________");			
					for(i=0;i<100;i++){
					
					printf("\nNome: %s  %s",nome[i],sob[i]);
					printf("\nTelefone:%d ", tel[i]);
					printf("\nE-mail: %s",email[i]);
					printf("\n__________________________________________________________");
				}
				getchar();
				getchar();

}
	void pesquisa(){
		int tell;		
		system("Cls");
		printf("\n\n\t\t---------Busca de Cadastro---------\n\t\tInforme o telefone:");
		scanf("%d",&tell);
		printf("\n--------------------------------------------------------");
		if(aux==1){
					printf("\n\tID:Professor");
				}
				if(aux==2){
					printf("\n\tID:Convidado");
				}
				if(aux==3){
					printf("\n\tID:Portador de Necessidades Especiais");
				}
				if(aux==4)
					printf("\n\tID:Aluno");
				
			for(i=0;i<a;i++){
				if(tel[i]==tell){
					printf("\nNome: %s %s\nTelefone: %d\nE-mail: %s\n",nome[i],sob[i],tel[i],email[i]);
					printf("\n--------------------------------------------------------");
					getchar();
					getchar();
					
				}	
			}
			}
			
	void sorteio(){
		system("Cls");
		int aw,u;
		printf("--------------- SORTEIO ------------");
		printf("\n\nQuantos numeros deseja gerar:");
		scanf("%d",&aw);
		  srand( (unsigned)time(NULL) );

    for(u=1 ; u <= aw ; u++)
        printf("Numero %d: %d\n",u, rand());
        getchar();
        getchar();
	}
	
	
	
	

