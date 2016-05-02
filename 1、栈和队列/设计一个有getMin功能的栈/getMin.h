#pragma once
#include <stack>


template <typename T>
class Stack
{
public:
	void Push(const T &key)
	{
		if (s2.empty())
		{
			s2.push(key);
		}
		else
		{
			if(key<s2.top())
			{
				s2.push(key);
			}
		}
		s1.push(key);
	
	}
	void Pop()
	{
		if(s1.top()==s2.top())
		{
			s1.pop();
			s2.pop();
		}
		else
		{
			s1.pop();
		}

	}
	void Print()
	{
		for(int i=0;i<s1.size();i++)
		{
			cout<<s1[i]<<" ";
		}
		cout<<endl;
	}
	void getMin()
	{
		if (!s2.empty())
		{
			cout<<s2.top()<<endl;
		}
		
	}
private:
	stack<T> s1;
	stack<T> s2;
};

void test()
{
	Stack<int> s1;
	s1.Push(4);
	s1.Push(5);
	s1.Push(6);
	s1.getMin();
	s1.Push(1);
	s1.getMin();
	s1.Push(2);
	s1.getMin();
	s1.Push(3);
	s1.getMin();
	s1.Pop();
	s1.getMin();
	s1.Pop();
	s1.getMin();
	s1.Pop();
	s1.getMin();
	s1.Pop();
	s1.getMin();
	s1.Pop();
	s1.getMin();
}