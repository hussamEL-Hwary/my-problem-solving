#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {

public:
	stack<int> stack_newest_on_top, stack_oldest_on_top;
	void push1(int x) {
		stack_newest_on_top.push(x);
		
	}

	
	
	void pop1() {
		
		if (!stack_oldest_on_top.empty())
		{
			stack_oldest_on_top.pop();
		}
		else
		{
			while (!stack_newest_on_top.empty())
			{

				stack_oldest_on_top.push(stack_newest_on_top.top());
				stack_newest_on_top.pop();
			}
			stack_oldest_on_top.pop();
		}
	}

	int front() {
		if (stack_oldest_on_top.empty())
		{
			while (!stack_newest_on_top.empty())
			{

				stack_oldest_on_top.push(stack_newest_on_top.top());
				stack_newest_on_top.pop();
			}
		}
		
		return stack_oldest_on_top.top();
	}
};

int main() {
	MyQueue q1;
	int q, type, x;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> type;
		if (type == 1) {
			cin >> x;
			q1.push1(x);
		}
		else if (type == 2) {
			q1.pop1();
		}
		else cout << q1.front() << endl;
	}
	
	return 0;
}

