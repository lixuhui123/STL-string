//#include <iostream>
//#include <string>
//using namespace std;
//int FirstChar(string s)
//{
//	int count[26] = { 0 };
//	for (auto & ch : s)/* 迭代变量，和迭代范围，可以用的有数组、和有begin和end方法的类 */
//	{
//		count[ch - 'a']++;
//	}
//	int j = 0;
//	for (auto & i:count)
//	{
//		cout << (char)('a' + j++) << " " << i << endl;
//	}
//
//}
///* (a| 1<<5)==(b|1<<5)     大小写转换
//01*/
///* 1234
//78
//
//4321
//7800
//1231高精加*/
//
//int strlenchar(string s)
//{
//	int flag = 0;
//	for (auto &ch:s)/* 没法得到下标 */
//	{
//		if (ch=='32')
//		{
//			 
//		}
//	}
//}
//int main()
//{
//	string s("1a2b3c4d5e6f7g8h9i1a2b3c4d5e6f7g8ha9i");
//	string flag;
//	string::size_type position;
//
//	//find 函数 返回jk 在s 中的下标位置   
//	position = s.find("1a");
//	if (position != s.npos)  //如果没找到，返回一个特别的标志c++中用npos表示，我这里npos取值是4294967295，  
//	{
//		cout << "position is : " << position << endl;
//	}
//	else
//	{
//		cout << "Not found the flag" + flag;
//	}
//	//从字符串s 下标5开始，查找字符串b ,返回b 在s 中的下标  
//	position = s.find("b", 5);
//	cout << "s.find(b,5) is : " << position << endl;
//	//cout << s;
//	char bb[156];
//	//scanf("%[^\n]", bb);
//	//fgets(bb, 1200, stdin);
//	cin.getline(bb,1515);
//	getline(cin, s);//只能是容器
//	getline(cin, s);/* 解决cin碰到空格就停的问题，它碰到回车才停 */
//	/* +的重载不是string的成员函数而+=才是，因为存在字符串在前的问题，无法做成对象
//	那么就做成友元函数*/
//	cout << bb;
//
//	
//	system("pause"); 
//	return 0;
//}
