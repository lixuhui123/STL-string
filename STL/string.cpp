#include <iostream>
#include <string>//c++
#include <cstring>//C����

using namespace std;

int main()
{
	string s1;
	string s2("12345600");
	string s3 = s2;
	string s4(5, 's');/* ���ַ�������size��lengthû������ ����һ�μ�16���ֽ�*/

	cout << s1.capacity << endl
		 << s2.capacity << endl
		 << s3.capacity << endl
		 << s4.capacity << endl;
	cout << s1.size << endl
		<< s2.size << endl
		<< s3.size << endl
		<< s4.length() << endl;

	cout << s1.capacity << endl
		<< s2.capacity << endl
		<< s3.capacity << endl
		<< s4.capacity() << endl;/* ����Ŀռ䣬 */

	s1.reserve(500);/* һ����511��16�ı���-1 */
	s1.empty();
	s1.clear();/* ���ᶯ�ռ䣬ֻ�ı�size */
	s1.resize(50);/* ֱ�Ӹ�size,���������reserve�͵���reserve��resize�м������0 */
	s1.resize(50,'d');/* �м���d */
	/* �������� */
	for (auto i=s1.begin();i!=s1.end();i++)
	{
		/* begin��һ��Ԫ�أ�end���һ��Ԫ�أ�����end���������� */

	}
	string::iterator i;
	for ( i = s1.begin(); i != s1.end(); i++)
	{
		 

	}
	for (auto & i:s1)
	{
		cout << i;
		/* ������һ����begin��end���� */
	}
	system("pause"); 
	return 0;
}