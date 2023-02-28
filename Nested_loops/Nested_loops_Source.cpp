#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
using std::cout;


int main()
{
	int n;
	cin >> n;
	cout << endl << "0) " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
	}

	cout << endl << endl << endl << "1) " << endl << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j <= i; j++)
		{
			cout << "*";

		}
	}

	cout << endl << endl << "2) " << endl << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int j = n; j >= i; j--)
		{
			cout << "*";
		}

	}

	cout << endl << endl << "3) " << endl << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;

		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = n; j >= i; j--)
		{
			cout << "*";
		}
	}

	cout << endl << endl << "4) " << endl << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;

		for (int j = i; j <= n; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
	}



	cout << endl << endl << "5) " << endl << endl;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << endl;
		for (int j = i;
			j < n;
			j++)
		{
			cout << " ";
		}
		cout << "/";

		for (int j = i;
			j <= (i * 2) - 1;
			j++)
		{
			cout << "  ";

		}
		cout << "\\";
	}

	for (int i = 0; i < n; i++)
	{
		cout << endl;

		for (int j = i; j <= i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		cout << "/";
	}
	cout << endl << endl << "6) " << endl << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			(j % 2 == i % 2) ? cout << "+" : cout << "-";
		}
		cout << endl;

	}
	// Chess desk
	int size;
	cout << "Enter the size of your desk: ";
	cin >> size;
	cout << endl << endl << "\t";
	for (int i = 0; i <= size * 2; i++)
	{
		cout << "_";
	}
	cout << endl << "\t";

	for (int i = 1; i < size / 2; i++)
	{
		for (int j = 1; j <= size / 2; j++)
		{

			cout << char(219) << char(219);
			cout << " " << " ";
		}
		cout << "|";
		cout << endl << "\t";
		for (int j = 1; j <= size / 2; j++)
		{
			cout << " " << " ";
			cout << char(219) << char(219);
		}
		cout << "|";
		cout << endl << "\t";
	}
	for (int i = 1; i <= size / 2; i++)
	{
		cout << char(219) << char(219);
		cout << " " << " ";
	}
	cout << "|";
	cout << endl << "\t";
	for (int j = 1; j <= size / 2; j++)
	{
		cout << " " << " ";
		cout << char(219) << char(219);
	}
	cout << "|";
	cout << endl << "\t";
	for (int i = 0; i <= size * 2; i++)
	{
		cout << "-";
	}
	cout << endl << endl << endl;

	// tag

	int qty, temp;
	cout << "Enter the quantaty of star symbols for your desk: ";
	cin >> qty;
	temp = qty;

	cout << endl << endl;
	for (int i = 0; i < qty / 2; i++)
	{
		for (int i = 0; i < qty; i++)
		{
			for (int j = 0; j < qty; j++)
			{
				cout << " *";  // блок кода *
			}

			for (int j = 0; j < qty; j++)
			{
				cout << "  "; // блок кода пробела

			}
			for (int j = 0; j < qty; j++)
			{
				cout << " *";
			}

			for (int j = 0; j < qty; j++)
			{
				cout << "  ";

			}
			for (int j = 0; j < qty; j++)
			{
				cout << " *";

			}
			cout << endl;
		}
		// большой цикл пробела 
		for (int i = 0; i < qty; i++)
		{
			for (int i = 0; i < qty / 2; i++)
			{
				for (int j = 0; j < qty; j++)
				{
					cout << "  ";

				}
				for (int j = 0; j < qty; j++)
				{
					cout << " *";

				}

			}
			cout << endl;
		}
	} // завершение большого цикла 1 и 2 ряда
	// добавление оконцовки (первый ряд)
	for (int i = 0; i < qty; i++)
	{
		for (int j = 0; j < qty; j++)
		{
			cout << " *";  // блок кода *
		}

		for (int j = 0; j < qty; j++)
		{
			cout << "  "; // блок кода пробела

		}
		for (int j = 0; j < qty; j++)
		{
			cout << " *";
		}

		for (int j = 0; j < qty; j++)
		{
			cout << "  ";

		}
		for (int j = 0; j < qty; j++)
		{
			cout << " *";

		}
		cout << endl;
	}
}