#include <iostream>
#include <queue>
#include <stack>
#include<vector>

using namespace std;

class Stack {
public:
	stack<int>s;
	vector<stack<int> > stacks;
public:
	Stack() {
		stack<int>s = {};
	}
	void Push(int a) {
		s.push(a);
		if (stacks.size() == 30) {
			stacks.clear();
		}
		stacks.push_back(s);
	}
	void Pop() {
		s.pop();
		if (stacks.size() == 30) {
			stacks.clear();
		}
		stacks.push_back(s);
	}
	void Rollback(int a) {
		s = stacks[a];
		if (stacks.size() == 30) {
			stacks.clear();
		}
		stacks.push_back(s);
	}
	void Forget() {
		stacks.clear();
	}
};

int main()
{
	Stack s;
	s.Push(3);
	s.Push(2);
	s.Push(1);
	s.Pop();
	s.Rollback(1);
}