//FONKSÝYONUN ÝÇÝNDE pointerla dizinin elemanlarýný ekrana yazacak program

#include <iostream>
using namespace std;
int main()
{
	int dizi[] = { 1,2,3,4,5 };

	int *p = dizi;

	print(dizi, 5);

	system("pause");
	return 0;
}

void print(int *p, int count)
{
	for (int i = 0; i <= 4; i++)
	{
		cout << *p;

	}

}
