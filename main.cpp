#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){

	setlocale(LC_ALL, "Portuguese"); 

	char palavra[30], secreta[30], jafoi[30], letra; 
	int tam, i, i2, chances, acertos, soc;
	bool acerto, jogardnv, tem;
	string um, dois, tres, quatro, cinco, letrajafoi = "";
	
	while (jogardnv == false) {
		
		tam = 0; 
		i = 0;
		i2 = 0;
		letra = 0;
		chances = 6;
		acertos = 0;
		acerto = false;
		jogardnv = false;
		tem = false;
		um = dois = tres = quatro = cinco = letrajafoi = "";
		
		for(i = 0; i < 30; i++){
			jafoi[i] = {};
	    }
	    
		for(i = 0; i < 30; i++){
			secreta[i] = {};
	    }
			
		cout << "Boas vindas ao jogo da forca!\n\n";
		cout << "Este jogo s� est� dispon�vel off-line, ent�o chame algu�m para jogar com voc�!\n\n"; 
		cout << "Fale para o seu adversario fechar os olhos e digite a palavra secreta: ";
		cin >> palavra;
		system("cls");
	
	    i = 0;
	    
		while(palavra[i] != '\0'){
			i++;
			tam++;
		}
		
		for(i = 0; i <= palavra[i]; i++){
			secreta[i] = '_';
		}
		
		while((chances > 0) && (acertos < tam)){
			cout << "" << " _______	\n";
			cout << " |/    |	\n";
			cout << " |    " << " " << um << "\n";
			cout << " |    " << dois << tres << quatro << "\n";
			cout << " |    " << cinco << "\n";
			cout << " |		 	\n";
			cout << " |		 	\n";
			cout << "_|__	 	\n";
			 	
			cout << "\n\nChances restantes: " << chances << "\n\n";
					
			cout << "Letras que j� foram: "; 
			for(int i = 0; i < letrajafoi.size(); i++){
				cout << letrajafoi[i] << "  ";
			}
			
			cout << "\n\nPalavra secreta: ";
			
			for(i = 0; i <= tam; i++){
				cout << secreta[i];
			}
			
			cout << "\n\nDigite uma letra: ";
			cin >> letra;
			
			letrajafoi.push_back(letra);

			tem = false;
			
			for(i = 0; i < 30; i++){
				if(jafoi[i] == letra){
	            	tem = true;
				}			
			}
			
			if (!tem){
				for(i = 0; i < tam; i++){
					if(palavra[i] == letra){
						acerto = true;
						secreta[i] = palavra[i];
						acertos++;
					}			
				}
		    } 
			else {
		    	cout << "\nEssa letra ja foi digitada anteriormente, digite outra!";
		    	chances++;
		    	for (i = 0; i < 1000000000 ; i++){
				}
			}
		    
			if(!acerto){
				chances--;
			} 
			else {
				jafoi[i2] = letra;
				i2++;
			}
			
			if (chances == 5){
				um = "O";
			}
			
			if (chances == 4){
				dois  = "/";
			}
			
			if (chances == 3){
				tres = "|";
			}
			
			if (chances == 2){
				quatro = "\\";
			}
			
			if (chances == 1){
				cinco = "/";
			}
			
			acerto = false;
			system("cls");
		}
		
		if(acertos == tam){
			cout << "       ___________      \n";
			cout << "      '._==_==_=_.'     \n";
			cout << "      .-\\:      /-.    \n";
			cout << "     | (|:.     |) |    \n";
			cout << "      '-|:.     |-'     \n";
			cout << "        \\::.    /      \n";
			cout << "         '::. .'        \n";
			cout << "           ) (          \n";
			cout << "         _.' '._        \n";
			cout << "        '-------'       \n\n";
			
			cout << "Voc� venceu o jogo da forca!\n\n"; 
			cout << "Digite 1 para jogar novamente\n"; 
			cout << "Digite 2 para sair do jogo\n";
			cout << "Op��o escolhida: ";
			cin >> soc;
			system("cls");
			if (soc == 1) {
				jogardnv = false;
			}
			else {
				jogardnv = true;
			}
		}
		else{
			cout << "     ����     7�������������       ����	\n";
			cout << "      ����  ������������������    ����		\n";
			cout << "    ������ ��������������������1 ������	\n";
			cout << "    s$����1��������������������� ������	\n";
			cout << "        7�����������������������s �		\n";
			cout << "          �����������������������			\n";
			cout << "          1�����  7�����1 ������s			\n";
			cout << "           ��       ���      s��			\n";
			cout << "          1��      $���1      ��1			\n";
			cout << "           ���  s���  ���s  ����			\n";
			cout << "           7��������   ��������1			\n";
			cout << "             �������s$s������				\n";
			cout << "           �� �s����������� � �s			\n";
			cout << "         $��� �           $ �����			\n";
			cout << "   ���������� � ��$��$��$�7�1 ���������	\n";
			cout << "   ������    ��������������1   �������		\n";
			cout << "     ����      1�����������      �����		\n\n";
			
			cout << "Voc� perdeu o jogo da forca\n";
			cout << "A palavra certa era: " << palavra << "\n\n";
			cout << "Digite 1 para jogar novamente\n";
			cout << "Digite 2 para sair do jogo\n";
			cout << "Op��o escolhida: ";
			cin >> soc;		
			system("cls");
			if (soc == 1) {
				jogardnv = false;
			}
			else {
				jogardnv = true;
			}
		}
	}	
	
	cout << "Obrigado por jogar!\n\n";
	cout << "Instagram @fe_henriq\n\n";
	
	system("PAUSE");
	
	return 0;
}
