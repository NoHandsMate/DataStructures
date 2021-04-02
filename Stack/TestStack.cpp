

#include "Stack.hpp"


int main() {
    Stack<int> stack;

    stack.push(5);
    stack.push(3);
    stack.push(1);
    stack.push(6);
    stack.push(7);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
