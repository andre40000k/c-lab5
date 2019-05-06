#include "iostream"
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int  a1, b1, c;	
	string Mass1 = "Firsfail.txt";
	fstream mass1;
	mass1.open(Mass1, fstream::in | fstream::out | fstream::app);
	if (!mass1.is_open())
	{
		cout << "Ошибка при открытии файла!!!";
	}
	else
	{
		int a = 0; 
		string line; 
		string line_file_text;
		while (getline(mass1, line))
		{
			a++;
		}
		a1 = a;
	}	
	cout << a1 << endl;
	mass1.close();

	string Mass2 = "Secondfail.txt";
	ifstream mass2;
	mass2.open(Mass2);

	if (!mass2.is_open())
	{
		cout << "Ошибка при открытии файла!!!";
	}
	else
	{
		int b = 0;
		string line;
		string line_file_text;
		while (getline(mass2, line))
		{
			b++;
		}
		b1 = b;
	}
	cout << b1;
	mass2.close();
	
	string Mass3 = "ThreeFile.txt";
	cout << endl << endl << endl;
	c = abs(a1 - b1);

	if (a1 > b1)
	{
		
		fstream mass1;
		mass1.open(Mass1, fstream::in | fstream::out);
		string line;
		string line_file_text;
		string line_file_text2;
		if (!mass1.is_open())
		{
			cout << "Ошибка при открытии файла!!!";
		}
		
		else
		{
			
			int a = 0;
			
			while (getline(mass1, line))
			{
				a++;
				if ((b1 - a) >= 0)
				{
					line_file_text.insert(line_file_text.size(), line);
					line_file_text.insert(line_file_text.size(), "\r\n");
				}
				else
				{
					line_file_text2.insert(line_file_text2.size(), line);
					line_file_text2.insert(line_file_text2.size(), "\r\n");
				}
			}			
		}
		mass1.close();
		ofstream mass11;
		mass11.open(Mass1, ios::trunc | ios::binary); //открыть и обрезать
		mass11.write(line_file_text.c_str(), line_file_text.size());
		/*	mass2.clear();*/
		mass2.close();
		ofstream mass3;
		mass3.open(Mass3);
		mass3.write(line_file_text2.c_str(), line_file_text.size());
		//mass3.clear();
		mass3.close();
	}
	if (b1 > a1)
	{
		ifstream mass2;
		mass2.open(Mass2);
		string line;
		string line_file_text;
		string line_file_text2;
		if (!mass2.is_open())
		{
			cout << "Ошибка при открытии файла!!!";
		}
		else
		{
			int b = 0;
			while (getline(mass2, line))
			{
				b++;
				if ((a1 - b) >= 0)
				{
					
					line_file_text.insert(line_file_text.size(), line);
					line_file_text.insert(line_file_text.size(), "\n");
				}
				else
				{
					line_file_text2.insert(line_file_text2.size(), line);
					line_file_text2.insert(line_file_text2.size(), "\n");
				}
			}
		}
		mass2.close();

		ofstream mass21;
		mass21.open(Mass2, ios::trunc | ios::binary); //открыть и обрезать
		mass21.write(line_file_text.c_str(), line_file_text.size());
	 /*	mass2.clear();*/
		mass2.close();

		ofstream mass3;
		mass3.open(Mass3);
		mass3.write(line_file_text2.c_str(), line_file_text.size());
		mass3.clear();
		/*mass3.close();*/
	}
	else
	{
		cout << "\nФайлы одинаковые\n";
	}

	fstream mass31;
	mass31.open(Mass3, fstream::in | fstream::out);
	string line;
	string line_file_text;	
	if (!mass31.is_open())
	{
		cout << "Ошибка при открытии файла!!!";
	}

	else
	{

		int a = 0;

		while (getline(mass31, line))
		{
			a++;
			if ( a <= c)
			{
				line_file_text.insert(line_file_text.size(), line);
				line_file_text.insert(line_file_text.size(), "\r\n");
			}
			
		}
	}
	mass31.close();
	ofstream mass311;
	mass311.open(Mass3, ios::trunc | ios::binary); //открыть и обрезать
	mass311.write(line_file_text.c_str(), line_file_text.size());
	/*	mass2.clear();*/
	mass311.close();

	ifstream mass12;
	mass12.open(Mass1);
	if (!mass12.is_open())
	{
		cout << "\nОшибка при открытии файла!!!";
	}
	else
	{
		char element;
		while (mass12.get(element))
		{
			cout << element;
		}
	}
	mass12.close();

	cout << endl << endl << endl;

	ifstream mass22;
	mass22.open(Mass2);
	if (!mass22.is_open())
	{
		cout << "\nОшибка при открытии файла!!!";
	}
	else
	{
		char element;
		while (mass22.get(element))
		{
			cout << element;
		}
	}
	mass22.close();

	cout << endl << endl << endl;

	ifstream mass32;
	mass32.open(Mass3);
	if (!mass32.is_open())
	{
		cout << "\nОшибка при открытии файла!!!";
	}
	else
	{
		char element;
		while (mass32.get(element))
		{
			cout << element;
		}
	}
	mass32.close();
	return 0;
}