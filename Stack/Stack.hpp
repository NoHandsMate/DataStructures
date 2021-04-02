//
// Created by lorenzo on 03/04/21.
//

#ifndef DATASTRUCTURES_STACK_HPP
#define DATASTRUCTURES_STACK_HPP

#include <iostream>

static constexpr int MAX_ITEMS = 5;


template<typename T>
class Stack {

public:

    constexpr Stack() {
        stack_pointer = -1; // When the stack is initialized we use -1 to mark that is empty
    }

    constexpr void push(const T&& item) {

        if(!isFull()) {
            stack_pointer++;
            stack[stack_pointer] = item;
        } else {
            std::cout << "The Stack is Full, cannot push" << '\n';
        }
    }

    constexpr auto pop() {

        if (!isEmpty()) {
            auto popped = stack[stack_pointer];
            stack_pointer--;
            return popped;
        } else {
            std::cout << "The stack is empty, cannot pop" << '\n';
        }
    }

    constexpr bool isEmpty() {
        return (stack_pointer == -1);
    };

    constexpr bool isFull() {

        return (stack_pointer == MAX_ITEMS - 1);
    };

    // return, without popping, the first item
    constexpr auto peek() {
        return stack[stack_pointer];
    }

private:
    T stack[MAX_ITEMS];
    int stack_pointer = 0;
};


#endif //DATASTRUCTURES_STACK_HPP
