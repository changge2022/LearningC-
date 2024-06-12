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
		cout << "通讯录已经满了，无法添加！" << endl;
		return;
	}

	else
	{
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		ads->personArray[ads->m_Size].m_Name = name;

		ads->m_Size++;
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");

	}



}
void showMenu() 
{
	cout << "****************************" << endl;
	cout << "*****   1.添加联系人   ******" << endl;
	cout << "*****   2.显示联系人   ******" << endl;
	cout << "*****   3.删除联系人   ******" << endl;
	cout << "*****   4.查找联系人   ******" << endl;
	cout << "*****   5.修改联系人   ******" << endl;
	cout << "*****   6.清空联系人   ******" << endl;
	cout << "*****   0.退出通讯录   ******" << endl;
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

			cout << "欢迎下次使用" << endl;
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