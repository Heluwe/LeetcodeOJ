#include <iostream>
#include <stack>

using namespace std;
class MinStack
{
private:
    stack<long> s;
    long min;
public:
    void push(int x)
    {
        if(s.empty())
        {
            s.push(0);
            min=x;
        }
        else
        {
            s.push(x - min);
            if (min > x)
            {
                min = x;
            }
        }
    }

    void pop()
    {
        long temp=s.top();
        s.pop();
        if (temp < 0)   //小于0，比之前的 min 小，还原上一个的最小值
        {
            /**
             * 根据push()的s.push(x - min) && min = x;
             * 这个 min1 被 pop 走了
             * 上一个的 min 就是 x-min=a(被 pop的) && (新的)min=x 带入
             * min(旧的)=min(新的)-a
             * 旧 min 就回来啦
             */
            min -= temp;
        }
    }

    int top()
    {
        long t=s.top();
        if (t < 0)
        {
            return (int)min;
        }
        else
        {
            return (int)(t+min);
        }
    }

    int getMin()
    {
        return (int)min;
    }
};
