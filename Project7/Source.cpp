# include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main()
{
	repchar();
	repchar('-');
	repchar('+', 30);
	system("pause");
	return 0;
}
void repchar()
{
	for (int j = 0; j < 45; j++)
		cout << '*';
		cout << endl;
}

void repchar(char ch)
{
	for (int j = 0; j < 45; j++)
		cout << ch;
	cout << endl;
}
void repchar(char ch, int i)
{
	for (int j = 0; j < i; j++)
		cout << ch;
	cout << endl;
}

