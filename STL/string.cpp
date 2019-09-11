#include <iostream>
#include <string>//c++
#include <cstring>//C语言

using namespace std;

int main()
{
	string s1;
	string s2("12345600");
	string s3 = s2;
	string s4(5, 's');/* 在字符容器中size和length没有区别 容量一次加16个字节*/

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
		<< s4.capacity() << endl;/* 申请的空间， */

	s1.reserve(500);/* 一次括511个16的倍数-1 */
	s1.empty();
	s1.clear();/* 不会动空间，只改变size */
	s1.resize(50);/* 直接改size,如果超过了reserve就调用reserve，resize中间填的是0 */
	s1.resize(50,'d');/* 中间填d */
	/* 容器遍历 */
	for (auto i=s1.begin();i!=s1.end();i++)
	{
		/* begin第一个元素，end最后一个元素，但是end不存在数据 */

	}
	string::iterator i;
	for ( i = s1.begin(); i != s1.end(); i++)
	{
		 

	}
	for (auto & i:s1)
	{
		cout << i;
		/* 适用于一切有begin和end的类 */
	}
	system("pause"); 
	return 0;
}