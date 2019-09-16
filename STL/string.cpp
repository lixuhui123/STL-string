#include <iostream>
#include <string>//C++
#include <cstring>//C语言

using namespace std;

int main()
{
	/* string类的初始化方式 */
	string s1;
	string s2("12345600");
	string s3 = s2;
	string s4(5, 's');/* 在字符容器中size和length没有区别 容量一次加16个字节*/
	string  s5(s2, 3);//用第三个之后的构造字符串，下标从0开始,用户使用size

	cout << s1<<endl
		<<s2<<endl
		<<s3<<endl
		<<s4<<endl
		<<s5<<endl;

	/*容量操作 */
	cout << s1.capacity() << endl
		<< s2.capacity() << endl
		<< s3.capacity() << endl
		<< s4.capacity() << endl;/* 返回空间总大小 */
	cout << s1.size() << endl
		<< s2.size() << endl
		<< s3.size() << endl;/* 返回有效字符个数 */
		cout<< s3.length() << endl;/* 返回有效字符个数 */

		/* 检测字符串是否为空 */
		cout << s1.empty() << endl << s2.empty() << endl<<endl;
		/* 清空类当中的有效字符,不会改变类空间的大小 */
		s2.clear();
		cout<<s2.capacity()<<endl;
		s2.resize(5, 'g');
		cout << s2<<endl;

		/* 将有效字符的空间改成n个，多余的用0填充 */
		/*s2.resize(5);
		s2.resize(5, 'g');
		cout << s2 << endl;*/
		s3.resize(5);/* 重新设定类当中size的大小，因为类中对字符的操作是以size为基础的 */
		s3.resize(7, 'a');/* 超出的部分用指定的字符不补齐，当空间不够时调用reserve扩容 */
		cout << s3 << endl;

		/*为字符串预留空间  */
		s4.reserve(17);/* 以16的整数倍扩容 */
		cout << s4.capacity()<<endl<<endl;/* capacity只会增大只有clear也不会改变它 */

		/* string对象的访问操作,对下标的操作 */
		cout << s3[3] << endl;

		/* string类对象的修改操作 */

		s3.push_back(s3[1]);
		cout << s3<<endl;

		s3.append("secfdxcs");/* 在类对象后面追加一个字符串 */
		cout << s3 << endl;

		/* +=操作既可以在后面添加string对象也可以追加字符串和字符 */
		s3 += s3;
		cout << s3 << endl;

		s3 += "1111111";
		cout << s3 << endl;

		s3.reserve(80);
		cout<<s3.capacity()<<endl;
		/* 返回c格式字符串 */
		cout << s3.c_str() << endl<<endl<<endl;

        /* find函数 */

		string t1 = "li xu hui ha ha ha";
		string t2 = "li xu hui ";
		//cout << (int)t1.find("liha")<<endl;
		//cout << t1.find(t2)<<endl;
		//cout << t1.find(" ",10) << endl;
		cout << t1.find(0,6,'h') << endl;
		cout<<t1.find("li xu", 0, 7);
		/* rfind逆序查找 */


	//s1.reserve(500);/* 一次括511个16的倍数-1 */
	//s1.empty();
	//s1.clear();/* 不会动空间，只改变size */
	//s1.resize(50);/* 直接改size,如果超过了reserve就调用reserve，resize中间填的是0 */
	//s1.resize(50,'d');/* 中间填d */
	///* 容器遍历 */
	//for (auto i=s1.begin();i!=s1.end();i++)
	//{
	//	/* begin第一个元素，end最后一个元素，但是end不存在数据 */
	//	return *i;
	//}
	//string::iterator i;
	//for ( i = s1.begin(); i != s1.end(); i++)
	//{
	//	 
	//	cout << *i;/* resize而变成0的会以空格的方式实现 */
	//}
	//for (auto & i:s1)
	//{
	//	cout << i;
	//	/* 适用于一切有begin和end的类 */
	//}
	system("pause"); 
	return 0;
}
