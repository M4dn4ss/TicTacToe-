#include <iostream>
using namespace std;
void saha(char dizi[])
{
	//Oyun sahasinin gorunusu
	cout << "|" << dizi[0]<<"|" << dizi[1] << "|" << dizi[2] << "|" << endl;
	cout << "|" << dizi[3] << "|" << dizi[4] << "|" << dizi[5] << "|" << endl;
	cout << "|" << dizi[6] << "|" << dizi[7] << "|" << dizi[8] << "|" << endl;
	
}
//1. oyumcunun secimlerini kontrol ediyor
int oyuncu1(int Secim1,char dizi[])
{
	if (Secim1 ==0)
	{
		return dizi[0] = 'X';
	}
	if (Secim1 == 1)
	{
		return dizi[1] = 'X';
	}
	if (Secim1 == 2)
	{
		return dizi[2] = 'X';
	}
	if (Secim1 == 3)
	{
		return dizi[3] = 'X';
	}
	if (Secim1 == 4)
	{
		return dizi[4] = 'X';
	}
	if (Secim1 == 5)
	{
		return dizi[5] = 'X';
	}
	if (Secim1 == 6)
	{
		return dizi[6] = 'X';
	}
	if (Secim1 == 7)
	{
		return dizi[7] = 'X';
	}
	if (Secim1 == 8)
	{
		return dizi[8] = 'X';
	}

}
//2. oyumcunun secimlerini kontrol ediyor
int oyuncu2(char Secim2,char dizi[])
{
	if (Secim2 == 0)
	{
		return dizi[0] = 'O';
	}
	if (Secim2 == 1)
	{
		return dizi[1] = 'O';
	}
	if (Secim2 == 2)
	{
		return dizi[2] = 'O';
	}
	if (Secim2 == 3)
	{
		return dizi[3] = 'O';
	}
	if (Secim2 == 4)
	{
		return dizi[4] = 'O';
	}
	if (Secim2 == 5)
	{
		return dizi[5] = 'O';
	}
	if (Secim2 == 6)
	{
		return dizi[6] = 'O';
	}
	if (Secim2 == 7)
	{
		return dizi[7] = 'O';
	}
	if (Secim2 == 8)
	{
		return dizi[8] = 'O';
	}
}
int kazanan1(char dizi[], int Secim1)
{
	//1. oyuncunun kazanip kazanmadigini kontrol ediyor.
	if (dizi[0] == 'X' && dizi[1] == 'X' && dizi[2] == 'X')
	{
		return 1;
		
	}
	if (dizi[3] == 'X' && dizi[4] == 'X' && dizi[5] == 'X')
	{
		return 1;
	}
	if (dizi[6] == 'X' && dizi[7] == 'X' && dizi[8] == 'X')
	{
		return 1;
	}
	if (dizi[0] == 'X' && dizi[3] == 'X' && dizi[6] == 'X')
	{
		return 1;
	}
	if (dizi[1] == 'X' && dizi[4] == 'X' && dizi[7] == 'X')
	{
		return 1;
	}
	if (dizi[2] == 'X' && dizi[5] == 'X' && dizi[8] == 'X')
	{
		return 1;
	}
	if (dizi[0] == 'X' && dizi[4] == 'X' && dizi[8] == 'X')
	{
		return 1;
	}
	if (dizi[2] == 'X' && dizi[4] == 'X' && dizi[6] == 'X')
	{
		return 1;
	}
	else
		return 0;


}
int kazanan2(char dizi[], int Secim2)
{
	//2. oyuncunun kazanip kazanmadigini kontrol ediyor

	if (dizi[0] == 'O' && dizi[1] == 'O' && dizi[2] == 'O')
	{
		return 2;
	}
	if (dizi[3] == 'O' && dizi[4] == 'O' && dizi[5] == 'O')
	{
		return 2;
	}
	if (dizi[6] == 'O' && dizi[7] == 'O' && dizi[8] == 'O')
	{
		return 2;
	}
	if (dizi[0] == 'O' && dizi[3] == 'O' && dizi[6] == 'O')
	{
		return 2;
	}
	if (dizi[1] == 'O' && dizi[4] == 'O' && dizi[7] == 'O')
	{
		return 2;
	}
	if (dizi[2] == 'O' && dizi[5] == 'O' && dizi[8] == 'O')
	{
		return 2;
	}
	if (dizi[0] == 'O' && dizi[4] == 'O' && dizi[8] == 'O')
	{
		return 2;
	}
	if (dizi[2] == 'O' && dizi[4] == 'O' && dizi[6] == 'O')
	{
		return 2;
	}
	else
		return 0;
	


}
int OyunBitisKontrol(char dizi[])
{
	if (dizi[0] == 'X' || dizi[0] == 'O' && dizi[1] == 'X' || dizi[1] == 'O' && dizi[2] == 'X' || dizi[2] == 'O' && dizi[3] == 'X' || dizi[3] == 'O' && dizi[4] == 'X' || dizi[4] == 'O'|| dizi[5] == 'X' || dizi[5] == 'O' && dizi[6] == 'X' || dizi[6] == 'O' && dizi[7] == 'X' || dizi[7] == 'O' && dizi[8] == 'X' || dizi[8] == 'O')
		return -1;
	
	
}


	
int main()
{
	int secim1,secim2;
	char dizi[9] = {'0','1','2','3','4','5','6','7','8'};
	cout << "---------TICTACTOE OYUNU-----------" << endl;
	for (int i = 0; i <= 4;i++) {
		
		saha(dizi);

		cout << "1. oyuncunun X koymak istedigi yer neresidir: ";
		cin >> secim1;
		system("cls");
		

		oyuncu1(secim1, dizi);
		saha(dizi);
		OyunBitisKontrol(dizi);
		kazanan1(dizi, secim1);
		
		
		
		
		if (kazanan1(dizi, secim1) == 1 )
		{
			OyunBitisKontrol(dizi);
			system("cls");
			saha(dizi);
			cout << "1. oyuncu kazandi" << endl;
			break;
				
				
		}
		

		
		cout << "2. oyuncunun O koymak istedigi yer neresidir: ";
		cin >> secim2;
		
		
		oyuncu2(secim2,dizi);
		
		saha(dizi);
		system("cls");

		kazanan2(dizi, secim2);

		OyunBitisKontrol(dizi);

		
		
			if (kazanan1(dizi, secim1) == 1 || kazanan2(dizi, secim2 == 2))
			{
				if (kazanan1(dizi, secim1) == 1)
				{
					system("cls");
					saha(dizi);
					cout << "1. oyuncu kazandi" << endl;
					break;
				}
				else if (kazanan2(dizi, secim2) == 2)
				{
					system("cls");
					saha(dizi);
					cout << "2. oyuncu kazandi" << endl;
					break;
				}
				else if (OyunBitisKontrol(dizi) == -1) 
				{
					if (kazanan1(dizi, secim1) == 1)
					{
						system("cls");
						saha(dizi);
						cout << "1. oyuncu kazandi" << endl;
						break;
					}
					else if (kazanan2(dizi, secim2) == 2)
					{
						system("cls");
						saha(dizi);
						cout << "2. oyuncu kazandi" << endl;
						break;
					}
					else if (kazanan1(dizi, secim1) == 0 || kazanan2(dizi, secim2 == 0))
					{
						system("cls");
						saha(dizi);
						cout << "Berabere kalindi" << endl;
						break;
					}
				}
			}
			else if(kazanan1(dizi,secim1)!=1&& kazanan2(dizi, secim2))
			{
				cout << "Kazanan olmadi";
				break;

			}
		
		

	} 

}
