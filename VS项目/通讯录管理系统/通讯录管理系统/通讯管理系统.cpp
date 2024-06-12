#include <iostream>
#include <string>
using namespace std;
#define	MAX 1000

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Address;
};

struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};

void addPerson(Addressbooks * ads)
{
	if (ads->m_Size > MAX) 
	{
		cout << "ͨѶ¼�Ѿ����ˣ��޷���ӣ�" << endl;
		return;
	}

	else
	{
		string name;
		cout << "����������" << endl;
		cin >> name;
		ads->personArray[ads->m_Size].m_Name = name;

		ads->m_Size++;
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");

	}



}
void showMenu() 
{
	cout << "****************************" << endl;
	cout << "*****   1.�����ϵ��   ******" << endl;
	cout << "*****   2.��ʾ��ϵ��   ******" << endl;
	cout << "*****   3.ɾ����ϵ��   ******" << endl;
	cout << "*****   4.������ϵ��   ******" << endl;
	cout << "*****   5.�޸���ϵ��   ******" << endl;
	cout << "*****   6.�����ϵ��   ******" << endl;
	cout << "*****   0.�˳�ͨѶ¼   ******" << endl;
	cout << "****************************" << endl;


}

int main() 
{
	Addressbooks ads;
	ads.m_Size = 0;

	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&ads);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:

			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	

	system("pause");
	return 0;

}