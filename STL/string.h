#pragma once
/* 自己实现的string类 */
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define COUNTCAPA(size) (size / CAPACITY + 1)*CAPACITY/* 要开辟的空间大小 */
#define CAPACITY 16
class String
{
	char *m_data;
	size_t m_size;
	size_t m_capacity;
public:
	String(const char* str = "") :
		m_capacity(CAPACITY), m_size(0)/* 初始化列表 */
	{
		if (str==nullptr)
		{
			m_size = 0;
		}
		else
		{
			m_size = strlen(str);/* 个数 */
		}
		
		m_data = new char[m_capacity];
		/*检测并且分配  */
		reserve(m_size);
		strncpy(m_data, str, m_size);
	}
	String(String &s)
	{
		/* 用另一个类来初始化 */
		m_capacity = s.m_capacity;
		m_size = s.m_size;
		m_data = new char[m_capacity];/* 深拷贝 */
		//strcpy(m_data, s.m_data);/* 它以\0为结束符完成拷贝 */
		strncpy(m_data, s.m_data, s.m_size);
		//swap(m_data, s.m_data);/* 以\0为结束符完成拷贝 */
	}
	String(size_t n, char ch):m_size(n),m_capacity(CAPACITY)
	{
		
		m_data = new char[m_capacity];
		reserve(m_size);
		memset(m_data, ch, m_size);
	}
	String operator=( String & s)/*重载=运算符，operator=必须是类的成员函数 */
	{
		if (this != &s)/* 取地址 */
		{

            //String tmp(s);
			//swap(m_data, tmp.m_data);/*不行 */
			m_capacity = s.m_capacity;
			m_size = s.m_size;
			m_data = new char[m_capacity];
			strncpy(m_data, s.m_data, s.m_size);
		}
		return *this;/* String 类型 */
	}
	void reverse()
	{
		int i=0;
		int j = m_size-1;
		for (;i<j;i++,j--)
		{
			swap(m_data[i], m_data[j]);
		}
		
	}
	void reserve(size_t size)
	{
		/*检测并且开辟不够的内存，重要函数和写法 */
		if (size > m_capacity)
		{
			m_capacity = (size / CAPACITY + 1)*CAPACITY;/* 2倍的大小 */
			m_data = (char *)realloc(m_data, m_capacity);
			/* 开辟m_capacity字节大小的空间，并且将m_data中的内容改到新空间当中 */
		}
	}
	 
	~String()
	{
		if (m_data)
		{
			delete[]m_data;
			m_data = NULL;
		}
		m_size = m_capacity = 0;
    }
	friend ostream & operator<<(ostream & os, const String & st);
	 
	size_t size()
	{
		return m_size;
	}
	size_t capacity()
	{
		return m_capacity;

	}
	bool empty()
	{
		return m_size == 0;
	}
	void clear()
	{
		/* 只删除内容空间还在 */
		m_size = 0;
	}
	void push_back(char tmp)
	{
		if (m_size>=m_capacity)
		{
			reserve(m_size);
		}
		m_data[m_size] = tmp;
		m_size++;
	}
	void pop_back()
	{
        if (m_size)
        {
			m_size--;
        }
	}
	int find(char tmp)
	{
		/* 返回找到的下标值 */
		for (unsigned int i=0;i<m_size;i++)
		{
			if (m_data[i]==tmp)
			{
				return m_size - 1;
			}
		}
		return -1;
	}
	int find(String s,char * str)
	{
		/* 在string里找字符串str返回找到的首元素位置 */
		char * tmp = s.m_data;
		int len = strlen(str);
		for (;(tmp=strchr(tmp,*str))!= 0;tmp++)
		{
			if (strncmp(tmp,str,len)==0)
			{
				return tmp - m_data + 1;
			}
		}
		return -1;
	}
	int find(String s1, String s2)
	{
		/* 在string s1里找string s2返回找到的首元素位置 */
		/*s1.c_str返回char* 类型的字符串 */
		char * a1 = s1.m_data;
		char * a2 = s2.m_data;
		int len = strlen(a2);
		for (; (a1 = strchr(a1, *a2)) != 0; a1++)
		{
			if (strncmp(a1, a2, len) == 0)
			{
				return a1 - s1.m_data + 1;
			}
		}
		return -1;
	}
	int insert(int pos, char tmp)
	{
		/* 在前面插入 */
		reserve(m_size + 1);
		 
		for (int i=m_size-1;i>pos;--i)
		{
			m_data[i + 1] = m_data[i];
		}
		m_data[pos] = tmp;
		m_size++;
		return pos;
	}
	void earse(int pos)
	{
		if (pos==m_size-1)
		{
			m_size--;
		}
		for (size_t i=pos;i<m_size;i++)
		{
			m_data[i] = m_data[i+1];
		}
		m_size--;
	}
};
ostream & operator <<(ostream &os, const String & st)
{
	/* 重载<<也要使用std的命名空间 */
	for (unsigned int i=0;i < st.m_size;++i)
	{
		os << st.m_data[i];
	}
	return os;
}

