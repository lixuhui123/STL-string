#include <iostream>
#include <string>//C++
#include <cstring>//C����

using namespace std;

int main()
{
	/* string��ĳ�ʼ����ʽ */
	string s1;
	string s2("12345600");
	string s3 = s2;
	string s4(5, 's');/* ���ַ�������size��lengthû������ ����һ�μ�16���ֽ�*/
	string  s5(s2, 3);//�õ�����֮��Ĺ����ַ������±��0��ʼ,�û�ʹ��size

	cout << s1<<endl
		<<s2<<endl
		<<s3<<endl
		<<s4<<endl
		<<s5<<endl;

	/*�������� */
	cout << s1.capacity() << endl
		<< s2.capacity() << endl
		<< s3.capacity() << endl
		<< s4.capacity() << endl;/* ���ؿռ��ܴ�С */
	cout << s1.size() << endl
		<< s2.size() << endl
		<< s3.size() << endl;/* ������Ч�ַ����� */
		cout<< s3.length() << endl;/* ������Ч�ַ����� */

		/* ����ַ����Ƿ�Ϊ�� */
		cout << s1.empty() << endl << s2.empty() << endl<<endl;
		/* ����൱�е���Ч�ַ�,����ı���ռ�Ĵ�С */
		s2.clear();
		cout<<s2.capacity()<<endl;
		s2.resize(5, 'g');
		cout << s2<<endl;

		/* ����Ч�ַ��Ŀռ�ĳ�n�����������0��� */
		/*s2.resize(5);
		s2.resize(5, 'g');
		cout << s2 << endl;*/
		s3.resize(5);/* �����趨�൱��size�Ĵ�С����Ϊ���ж��ַ��Ĳ�������sizeΪ������ */
		s3.resize(7, 'a');/* �����Ĳ�����ָ�����ַ������룬���ռ䲻��ʱ����reserve���� */
		cout << s3 << endl;

		/*Ϊ�ַ���Ԥ���ռ�  */
		s4.reserve(17);/* ��16������������ */
		cout << s4.capacity()<<endl<<endl;/* capacityֻ������ֻ��clearҲ����ı��� */

		/* string����ķ��ʲ���,���±�Ĳ��� */
		cout << s3[3] << endl;

		/* string�������޸Ĳ��� */

		s3.push_back(s3[1]);
		cout << s3<<endl;

		s3.append("secfdxcs");/* ����������׷��һ���ַ��� */
		cout << s3 << endl;

		/* +=�����ȿ����ں������string����Ҳ����׷���ַ������ַ� */
		s3 += s3;
		cout << s3 << endl;

		s3 += "1111111";
		cout << s3 << endl;

		s3.reserve(80);
		cout<<s3.capacity()<<endl;
		/* ����c��ʽ�ַ��� */
		cout << s3.c_str() << endl<<endl<<endl;

        /* find���� */

		string t1 = "li xu hui ha ha ha";
		string t2 = "li xu hui ";
		//cout << (int)t1.find("liha")<<endl;
		//cout << t1.find(t2)<<endl;
		//cout << t1.find(" ",10) << endl;
		cout << t1.find(0,6,'h') << endl;
		cout<<t1.find("li xu", 0, 7);
		/* rfind������� */


	//s1.reserve(500);/* һ����511��16�ı���-1 */
	//s1.empty();
	//s1.clear();/* ���ᶯ�ռ䣬ֻ�ı�size */
	//s1.resize(50);/* ֱ�Ӹ�size,���������reserve�͵���reserve��resize�м������0 */
	//s1.resize(50,'d');/* �м���d */
	///* �������� */
	//for (auto i=s1.begin();i!=s1.end();i++)
	//{
	//	/* begin��һ��Ԫ�أ�end���һ��Ԫ�أ�����end���������� */
	//	return *i;
	//}
	//string::iterator i;
	//for ( i = s1.begin(); i != s1.end(); i++)
	//{
	//	 
	//	cout << *i;/* resize�����0�Ļ��Կո�ķ�ʽʵ�� */
	//}
	//for (auto & i:s1)
	//{
	//	cout << i;
	//	/* ������һ����begin��end���� */
	//}
	system("pause"); 
	return 0;
}
