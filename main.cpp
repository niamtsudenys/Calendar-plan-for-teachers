#include <iostream>
#include <string>
#include <vector>
#include <Windows.h> 
#include <fstream>
//#include <conio.h> 

using namespace std;

class ��������������������
{
private:
	int �������������������������;
	int ���������������������������;

	int ����������������;

	int ����������������;
	int ����2��������;
	int ����3��������;
	int ����4��������;
	int ����5��������;
	int ����6��������;
	int ����05�����;

	int ��������������������;

	int ������������������;
	int ����������������;
	int ��������������������;
	int ������������������;
	int ���������������������;
	int �������������������;

	bool ����������г������������������������;
	bool ����������г��������������������������;

	int ��������������г�;
	int ��������������1�������;
	int ��������������2�������;

public:
	��������������������()
	{
		������������������������� = 0;
		��������������������������� = 0;

		���������������� = 1;

		���������������� = 0;
		����2�������� = 0;
		����3�������� = 0;
		����4�������� = 0;
		����5�������� = 0;
		����6�������� = 0;
		����05����� = 0;

		�������������������� = 0;

		������������������ = 0;
		���������������� = 0;
		�������������������� = 0;
		������������������ = 0;
		��������������������� = 0;
		������������������� = 0;

		����������г������������������������ = 0;
		����������г�������������������������� = 0;

		��������������г� = 0;
		��������������1������� = 0;
		��������������2������� = 0;
	}

	void gotoxy(int x, int y)
	{
		COORD p = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	}

	void getʳ�����������()
	{
		string save;

		for (;save != "y";)
		{
			gotoxy(0, 0);
			cout << "�i���i��� ����� �� ���������� �i�:\t" << ��������������г�;

			gotoxy(0, 1);
			cout << "�i���i��� ����� �� 1 �������:\t\t" << ��������������1�������;

			gotoxy(0, 2);
			cout << "�i���i��� ����� �� 2 �������:\t\t" << ��������������2�������;

			gotoxy(0, ��������������г� + 8);

			gotoxy(50, 0);
			cout << "��� ���� ��� �������� ���i � �������� ����i��:   y";
			gotoxy(50, 1);
			cin >> save;
		}
	}
	
	void setг������������������������()
	{
		gotoxy(0, 22);

		int clearRow = 0;

		for (;;)
		{
			cout << "����i�� �i� ������� ������������ ����:" << endl;
			
			string �i����������;
			bool digit;

			cin >> �i����������;
			
			for (auto i : �i����������)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				������������������������� = stoi(�i����������);

				if (������������������������� > 2021 && ������������������������� < 3000)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 2);
		cout << �������������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}

	void setг��������������������������()
	{
		��������������������������� = ������������������������� + 1;
	}

	void set����������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;

		for (;;)
		{
			cout << "����i�� ���� ������� ����� � ������i ���� (������� 0109, ��� ������i� ����i�����):" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				���������������� = stoi(les);

				if (���������������� > 100 && ���������������� < 3113)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 3);
		cout << ����������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set����2��������()
	{
		gotoxy(0, 22);
		int clearRow = 0;

		for (;;)
		{
			cout << "����i�� ���� 2-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����2�������� = stoi(les);

				if (����2�������� > 100 && ����2�������� <= 3112)
				{
					cout << endl;
					break;
				}
				else if (����2�������� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 4);
		cout << ����2��������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set����3��������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� 3-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����3�������� = stoi(les);

				if (����3�������� > 100 && ����3�������� < 3113)
				{
					cout << endl;
					break;
				}
				else if (����3�������� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 5);
		cout << ����3��������;

		for (int i = 23; i <= (28 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set����4��������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� 4-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����4�������� = stoi(les);

				if (����4�������� > 100 && ����4�������� < 3113)
				{
					cout << endl;
					break;
				}
				else if (����4�������� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 6);
		cout << ����4��������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set����5��������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� 5-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����5�������� = stoi(les);

				if (����5�������� > 100 && ����5�������� < 3113)
				{
					cout << endl;
					break;
				}
				else if (����5�������� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 7);
		cout << ����5��������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set����6��������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� 6-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����6�������� = stoi(les);

				if (����6�������� > 100 && ����6�������� < 3113)
				{
					cout << endl;
					break;
				}
				else if (����6�������� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 8);
		cout << ����6��������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set�����������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� 0.5-�� ����� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				����05����� = stoi(les);

				if (����05����� > 100 && ����05����� < 3113)
				{
					cout << endl;
					break;
				}
				else if (����05����� == 0)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 9);
		cout << ����05�����;

		for (int i = 23; i <= (28 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}

	void set��������������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ���������� ���i��� � ������i ����:" << endl;

			string ostanDzvinok;
			bool digit;

			cin >> ostanDzvinok;

			for (auto i : ostanDzvinok)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				�������������������� = stoi(ostanDzvinok);

				if (�������������������� > 100 && �������������������� < 3113)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 10);
		cout << ��������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}

	void set������������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� ��i��i� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				������������������ = stoi(les);

				if (������������������ > 100 && ������������������ <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 11);
		cout << ������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void setʳ���������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� �������� ��� �i��� ��i��i� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				���������������� = stoi(les);

				if (���������������� > 100 && ���������������� <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 12);
		cout << ����������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set��������������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� ������� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				�������������������� = stoi(les);

				if (�������������������� > 100 && �������������������� <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 13);
		cout << ��������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void setʳ�����������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� �������� ��� �i��� ������� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				������������������ = stoi(les);

				if (������������������ > 100 && ������������������ <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 14);
		cout << ������������������;

		for (int i = 23; i <= (27 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void set��������������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� �������� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				��������������������� = stoi(les);

				if (��������������������� > 100 && ��������������������� <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 15);
		cout << ���������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}
	void setʳ������������������()
	{
		gotoxy(0, 22);
		int clearRow = 0;
		
		for (;;)
		{
			cout << "����i�� ���� ������� �������� ��� �i��� �������� ���i��� � ������i ����:" << endl;

			string les;
			bool digit;

			cin >> les;

			for (auto i : les)
			{
				if (isdigit(i))
				{
					digit = 1;
				}
				else
				{
					digit = 0;
					break;
				}
			}

			if (digit)
			{
				������������������� = stoi(les);

				if (������������������� > 100 && ������������������� <= 3112)
				{
					cout << endl;
					break;
				}
				else
				{
					cout << "����������� ��i�!" << endl;
					clearRow++;
				}
			}
			else
			{
				cout << "����������� ��i�!" << endl;
				clearRow++;
			}
		}

		gotoxy(40, 16);
		cout << �������������������;

		for (int i = 23; i <= (23 + clearRow * 3); i++)
		{
			gotoxy(0, i);
			cout << "                                                                                 " << endl;
		}

		gotoxy(0, 0);
	}

	// ������ ����� - ��������
	vector <int> �������̳����{ 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31 };

	vector <int> ������������{ 1410, 2512, 803, 1604, 905 };

	vector <int> ���������������������;

	vector <int> ���������;

	void �������������()
	{
		system("cls");

		cout << "B���i�� ���i:" << endl << endl;

		cout << "1. �i� ������� ������������ ����:\t" << ������������������������� << endl;

		cout << "2. ���� 1-��� �����:\t\t\t" << ���������������� << endl;
		cout << "3. ���� 2-��� �����:\t\t\t" << ����2�������� << endl;
		cout << "4. ���� 3-��� �����:\t\t\t" << ����3�������� << endl;
		cout << "5. ���� 4-��� �����:\t\t\t" << ����4�������� << endl;
		cout << "6. ���� 5-��� �����:\t\t\t" << ����5�������� << endl;
		cout << "7. ���� 6-��� �����:\t\t\t" << ����6�������� << endl;
		cout << "8. ���� ��������� �����:\t\t" << ����2�������� << endl;

		cout << "9. ���� ��������� ���i���:\t\t" << �������������������� << endl;

		cout << "10. ������� ��i��i� ���i���:\t\t" << ������������������ << endl;
		cout << "11. �i���� ��i��i� ���i���:\t\t" << ���������������� << endl;
		cout << "12. ������� ������� ���i���:\t\t" << �������������������� << endl;
		cout << "13. �i���� ������� ���i���:\t\t" << ������������������ << endl;
		cout << "14. ������� �������� ���i���:\t\t" << ��������������������� << endl;
		cout << "15. �i���� �������� ���i���:\t\t" << ������������������� << endl << endl;

		setг������������������������();
		set����������������();
		set����2��������();
		set����3��������();
		set����4��������();
		set����5��������();
		set����6��������();
		set�����������������();

		set��������������������();

		set������������������();
		setʳ���������������();
		set��������������������();
		setʳ�����������������();
		set��������������������();
		setʳ������������������();
	}

	void ���������������������()
	{
		bool ����������� = 0;
		for (; !�����������;)
		{
			system("cls");

			cout << "�����i��� ������i ���i." << endl << endl;

			cout << "1. �i� ������� ������������ ����:\t" << ������������������������� << endl;

			cout << "2. ���� 1-��� �����:\t\t\t" << ���������������� << endl;
			cout << "3. ���� 2-��� �����:\t\t\t" << ����2�������� << endl;
			cout << "4. ���� 3-��� �����:\t\t\t" << ����3�������� << endl;
			cout << "5. ���� 4-��� �����:\t\t\t" << ����4�������� << endl;
			cout << "6. ���� 5-��� �����:\t\t\t" << ����5�������� << endl;
			cout << "7. ���� 6-��� �����:\t\t\t" << ����6�������� << endl;
			cout << "8. ���� ��������� �����:\t\t" << ����05����� << endl;

			cout << "9. ���� ��������� ���i���:\t\t" << �������������������� << endl;

			cout << "10. ������� ��i��i� ���i���:\t\t" << ������������������ << endl;
			cout << "11. �i���� ��i��i� ���i���:\t\t" << ���������������� << endl;
			cout << "12. ������� ������� ���i���:\t\t" << �������������������� << endl;
			cout << "13. �i���� ������� ���i���:\t\t" << ������������������ << endl;
			cout << "14. ������� �������� ���i���:\t\t" << ��������������������� << endl;
			cout << "15. �i���� �������� ���i���:\t\t" << ������������������� << endl << endl;

			cout << "���� ��� ��������� ����i��:\t\ty" << endl;
			cout << "���� ���� ��������� ������� ����i��:\tn" << endl << endl;

			string ch;

			for (;;)
			{
				cin >> ch;

				if (ch == "y" || ch == "n")
				{
					break;
				}
			}

			gotoxy(0, 21);
			cout << "                                   ";

			if (ch == "y")
			{
				����������� = true;
			}
			else if (ch == "n")
			{
				����������� = false;
			}
			
			if (!�����������)
			{
				int nomerRyada = 0;

				for (;;)
				{
					gotoxy(0, 21);
					cout << "�����i�� ����� ����� �� ��������� �������:" << endl;

					string ����������;
					bool digit;

					cin >> ����������;

					gotoxy(0, 21);
					cout << "                                              :" << endl;



					for (auto i : ����������)
					{
						if (isdigit(i))
						{
							digit = 1;
						}
						else
						{
							digit = 0;
							break;
						}
					}

					if (digit)
					{
						nomerRyada = stoi(����������);

						if (nomerRyada > 0 && nomerRyada <= 15)
						{
							cout << endl;
							break;
						}
						else
						{
							cout << "����������� ��i�!" << endl;
						}
					}
					else
					{
						cout << "����������� ��i�!" << endl;
					}
				}

				switch (nomerRyada)
				{
				case 1:
					setг������������������������();
					break;
				case 2:
					set����������������();
					break;
				case 3:
					set����2��������();
					break;
				case 4:
					set����3��������();
					break;
				case 5:
					set����4��������();
					break;
				case 6:
					set����5��������();
					break;
				case 7:
					set����6��������();
					break;
				case 8:
					set�����������������();
					break;
				case 9:
					set��������������������();
					break;
				case 10:
					set������������������();
					break;
				case 11:
					setʳ���������������();
					break;
				case 12:
					set��������������������();
					break;
				case 13:
					setʳ�����������������();
					break;
				case 14:
					set��������������������();
					break;
				case 15:
					setʳ������������������();
					break;
				}
			}
		}
	}

	void ������������������������������()
	{
		if (������������������������� % 4 == 0 && (������������������������� % 100 != 0
			|| ������������������������� % 400 == 0))
		{
			����������г������������������������ = true;
		}
		else
		{
			����������г������������������������ = false;
		}

		if (��������������������������� % 4 == 0 && (��������������������������� % 100 != 0
			|| ��������������������������� % 400 == 0))
		{
			����������г�������������������������� = true;

			�������̳����.at(5) = 29;
		}
		else
		{
			����������г�������������������������� = false;

			�������̳����.at(5) = 28;
		}
	}

	void �������������������������()
	{
		int a, y, m;
		a = (14 - ���������������� % 100) / 12;
		y = ������������������������� - a;
		m = ���������������� % 100 + 12 * a - 2;

		���������������� = (7000 + (���������������� / 100 + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
	}

	void �������0109()
	{
		int number = 109;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 1; j <= �������̳����.at(i); j++)
			{
				���������������������.push_back((number + i) + (100 * (j - 1)));
			}
		}

		number = 101;

		for (int i = 4; i < 12; i++)
		{
			for (int j = 1; j <= �������̳����.at(i); j++)
			{
				���������������������.push_back((number + i - 4) + (100 * (j - 1)));
			}
		}
	}

	void ������������������()
	{
		system("cls");

		// ���� ���
		gotoxy(0, 4);
		cout << endl << "���� ����i�:" << endl << endl;

		int lec1 = (���������������� / 100) - 1;
		int lec2 = (����2�������� / 100) - 1;
		int lec3 = (����3�������� / 100) - 1;
		int lec4 = (����4�������� / 100) - 1;
		int lec5 = (����5�������� / 100) - 1;
		int lec6 = (����6�������� / 100) - 1;
		int lec05 = (����05����� / 100) - 1;

		int ��������K = 0;
		int ������K = 0;
		int ��������K = 0;
		int ������K = 0;
		int ��������K = 0;
		int ������K = 0;

		for (int i = 0; i < ���������������������.size(); i++)
		{
			if (���������������������.at(i) == ������������������)
			{
				��������K = i;
			}

			if (���������������������.at(i) == ����������������)
			{
				������K = i;
			}

			if (���������������������.at(i) == ��������������������)
			{
				��������K = i;
			}

			if (���������������������.at(i) == ������������������)
			{
				������K = i;
			}

			if (���������������������.at(i) == ���������������������)
			{
				��������K = i;
			}

			if (���������������������.at(i) == �������������������)
			{
				������K = i;
			}
		}

		for (int i = 0; i < ���������������������.size(); i++)
		{
			if (���������������� > 0 && i == lec1) //   1 urok
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec1) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec1) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec1) / 100 << ".";
					}

					if (���������������������.at(lec1) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec1) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec1) % 100 << endl;
					}

					���������.push_back(���������������������.at(lec1));

					��������������г�++;

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}
				}
				lec1 += 7;
			}

			if (����2�������� > 0 && i == lec2)   // 2 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec2) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec2) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec2) / 100 << ".";
					}

					if (���������������������.at(lec2) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec2) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec2) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec2));

					��������������г�++;
				}
				lec2 += 7;
			}

			if (����3�������� > 0 && i == lec3)      // 3 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec3) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec3) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec3) / 100 << ".";
					}

					if (���������������������.at(lec3) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec3) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec3) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec3));

					��������������г�++;
				}
				lec3 += 7;
			}

			if (����4�������� > 0 && i == lec4)        // 4 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec4) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec4) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec4) / 100 << ".";
					}

					if (���������������������.at(lec4) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec4) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec4) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec4));

					��������������г�++;
				}
				lec4 += 7;
			}

			if (����5�������� > 0 && i == lec5)     // 5 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec5) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec5) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec5) / 100 << ".";
					}

					if (���������������������.at(lec5) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec5) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec5) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec5));

					��������������г�++;
				}
				lec5 += 7;
			}

			if (����6�������� > 0 && i == lec6)      // 6 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) || 
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec6) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec6) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec6) / 100 << ".";
					}

					if (���������������������.at(lec6) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec6) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec6) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec6));

					��������������г�++;
				}
				lec6 += 7;
			}

			if (����05����� > 0 && i == lec05)   // 0.5 yrok v nedeli
			{
				if ((i < ��������K) || (i >= ������K && i < ��������K) ||
					(i >= ������K && i < ��������K) || (i >= ������K))
				{
					if (���������������������.at(lec05) / 100 < 10)
					{
						cout << "0" << ���������������������.at(lec05) / 100 << ".";
					}
					else
					{
						cout << ���������������������.at(lec05) / 100 << ".";
					}

					if (���������������������.at(lec05) % 100 < 10)
					{
						cout << "0" << ���������������������.at(lec05) % 100 << endl;
					}
					else
					{
						cout << ���������������������.at(lec05) % 100 << endl;
					}

					if (i < ��������K)
					{
						��������������1�������++;
					}
					else
					{
						��������������2�������++;
					}

					���������.push_back(���������������������.at(lec05));

					��������������г�++;
				}
				lec05 += 14;
			}

			if (���������������������.at(i) == ��������������������)
			{
				break;
			}
		}
	}

	ofstream fs;

	void myFile()
	{
		system("cls");

		string txt = ".txt";

		string doc = ".doc";

		string nameFile;

		cout << "����i�� ����� ��������� ��� ���������� �����:" << endl;

		cin >> nameFile;

		cout << endl << "�����i�� ������ ���������." << endl << endl;

		cout << "�������� Microsoft Word\t\t1" << endl;
		cout << "��������� �������� \t\t2" << endl;

		string formatDoc;

		cin >> formatDoc;

		if (formatDoc == "1")
		{
			nameFile = nameFile + doc;
		}

		if (formatDoc == "2")
		{
			nameFile = nameFile + txt;
		}

		fs.open(nameFile);

		if (!fs.is_open())
		{
			cout << "������� ����������." << endl;
		}
		else
		{
			cout << endl << endl << "��� �������� ��������� � ����i, �� ����������� ���� ��������." << endl;
			SetConsoleCP(1251);
			fs << "�i���i��� ����� �� ���������� �i�:    " << ��������������г� << endl;
			fs << "�i���i��� ����� �� 1 �������:         " << ��������������1������� << endl;
			fs << "�i���i��� ����� �� 2 �������:         " << ��������������2������� << endl;

			fs << endl << endl << " ���� ����i�:" << endl << endl;
			for (auto& it : ���������)
			{
				if (it / 100 < 10)
				{
					fs << "   " << "0" << it / 100 << ".";
				}
				else
				{
					fs << "   " << it / 100 << ".";
				}

				if (it % 100 < 10)
				{
					fs << "0" << it % 100 << endl;
				}
				else
				{
					fs << it % 100 << endl;
				}
			}
		}
		SetConsoleCP(866);
		fs.close();
	}
};

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	�������������������� ����������;

	����������.�������������();

	����������.���������������������();

	����������.������������������������������();

	����������.�������������������������();

	����������.�������0109();

	����������.������������������();

	����������.getʳ�����������();

	����������.myFile();
}