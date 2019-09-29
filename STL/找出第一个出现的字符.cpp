//#include <iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//	int firstUniqChar(string s) 
//	{
//
//		if (!s.size())
//		{
//			return -1;
//		}
//		string tmp;
//		size_t a = -1;
//		int count[26] = { 0 };
//		for (auto & ch : s)/* 迭代变量，和迭代范围，可以用的有数组、和有begin和end方法的类 */
//		{
//			count[ch - 'a']++;
//		}
//		int j = 0;
//		for (auto & i : count)
//		{		
//			//cout << (char)('a' + j++) << " " << i << endl;
//			j++;
//			if (i == 1)
//			{
//				//tmp[j] = 'a' + j-1;
//				tmp.push_back('a' + j - 1);
//			}
//		}
//		for (auto & i:tmp)
//		{
//			int flag;
//			
//			flag=s.find(i);
//			if (flag<a)
//			{
//				a = flag;
//			}
//			//cout << i << " ";
//		}
//
//		return a;
//		 
//	}	
//};
//int main()
//{
//	Solution s;
//	string str("leetcode");
//	int a=s.firstUniqChar(str);
//	cout << a;
//	system("pause"); 
//	return 0;
//}
//
// 	
