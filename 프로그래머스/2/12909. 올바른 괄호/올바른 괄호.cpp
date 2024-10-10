#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> items;

public:
    bool isEmpty() const
    {
        return items.empty();
    }

    void push(const T &item)
    {
        items.push_back(item);
    }

    T pop()
    {
        if (isEmpty())
        {
            out_of_range("스택이 비어 있습니다");
        }
        T item = items.back();
        items.pop_back();
        return item;
    }
};

bool solution(string s)
{
    Stack<char> stack;

    for (char ch : s)
    {
        if(ch == '(')
        {
            stack.push(ch);
        }
        else if(ch==')')
        {
            if(stack.isEmpty())
            {
                return false;
            }
            stack.pop();
        }
    }

    return stack.isEmpty();
}