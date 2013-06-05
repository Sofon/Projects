# include <iostream>
using namespace std;


void prov(int**,int);
void summ(int**,int);



int main(){

	printf("Vvedite n(matriha kvadratnai)\n");
	cin >> n;


    for (int i = 0; i < n; ++i)
        Mas[i] = new int [n];
		cout<<"Vvedite l\n";
    for (int i = 0; i < n; i++)
    {
		for (int j = 0; j < n; j++)
		{
			cin >> Mas[i][j];
		}
		}
		}
		 //ввели матрицу
void prov(int **Mas,int n)
{int i;
int j;
int k;
for (int i = 0; i < n; i++);
{if (k>2) {
flag=false;
}
k=0;
for (int j = 0; j < n; j++)
{if ( Mas[i][j]<0){k=k+1;}}}
return flag;}
void summ(int**Mas,int n) //посчитали сумму
{int i,j
for (int i = 0; i < n; i++)
{for (int j = 0; j < n; j++)
{sum +=Mas[i][j];}}
return sum;}
	prov(Mas,n);

	if (flag==true){
	printf("Ne udvolitvoraet usloviu");}
	else
	{summ(Mas,n);
    printf("%4.1f", sum);}
	}

