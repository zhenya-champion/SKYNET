//��������� �������������� ��������

/*����������� ����� ������. ������ ������� ��������� ��������� MAX_SIZE=30. 
����������� ��� ���� ��������
������ �� �������([int i]),
���������� �������� (+ int),
�������� �������� �� ������ ������� (--). 
������������� ��������� �������������� ��������.
*/

#include "vector.h" 
#include <iostream> 
using namespace std;
int main()
{
//�������������� ����
	try
	{
		Vector x(2);              //������ �� ���� ���������
		Vector y;                 //������ ������ 
		cout<<x;                  //������ ������� � 
		cout<<"Nomer?";
		int i; 
		cin >> i;
		//����� �������� � ������� i, ���� ����� ������ 2 ��� ������ 0, ��
		//������������ �������������� �������� 
		cout<<x[i]<<endl;
		//���������� �������� � ������, ���� MAX _SIZE=2, �� ������������
		//�������������� �������� 
		y=x+3;
		cout << y;
		//������� ���� ������� �� �������
		--x;
		cout << x;
		//������� ���� ������� �� �������
		--x;
		cout << x;                       //������ ������
		//������� ���� ������� �� �������
        //������������ �������������� ��������
		--x;
	}
	//���������� ���������� 
	catch(int)
	{cout << "ERROR!!!" << endl; }        //��������� �� ������ 
	return 0;
}
