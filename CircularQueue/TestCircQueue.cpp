//
// Created by lorenzo on 07/04/21.
//

#include "CircularQueue.hpp"

int main() {

    CircQueue<int> c_queue;

    c_queue.enQueue(1);
    c_queue.enQueue(2);
    c_queue.enQueue(3);
    c_queue.enQueue(4);
    c_queue.enQueue(5);

    c_queue.printQueue();

    auto a = c_queue.deQueue();
    auto b = c_queue.deQueue();
    auto c = c_queue.deQueue();

    std::cout << *a << '\n';
    std::cout << *b << '\n';
    std::cout << *c << '\n';

    c_queue.printQueue();

    return 0;
}