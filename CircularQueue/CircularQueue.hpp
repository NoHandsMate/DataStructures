//
// Created by lorenzo on 07/04/21.
//

#ifndef DATASTRUCTURES_CIRCULARQUEUE_HPP
#define DATASTRUCTURES_CIRCULARQUEUE_HPP

#include <array>
#include <optional>
#include <iostream>

//TODO adjust const correctness and noexcept.

constexpr static int MAX_SIZE = 5;

template<typename T>
class CircQueue {

public:
    CircQueue()
        : head(-1), tail(-1) {}

    constexpr bool isEmpty() const {
       return (tail == -1);
    }

    constexpr bool isFull() const {

        if(tail == MAX_SIZE - 1) {
            return true;
        } else if(head == tail + 1) {
            return true;
        } else {
            return false;
        }
    }

    constexpr void enQueue(const T&& item) {

        if(!isFull()) {

            head = isEmpty() ? 0 : head;

            tail = (tail + 1) % MAX_SIZE;
            circ_queue[tail] = item;

        } else {
            std::cout << "Cannot enQueue: queue is full" << '\n';
        }
    }

    constexpr std::optional<T> deQueue() {

        if(!isEmpty()) {

            auto result = circ_queue[head];

            if(head == tail) {
                head = -1;
                tail = -1;
            } else {

                head = (head + 1) % MAX_SIZE;
                return result;
            }

        } else {
            std::cout << "Cannot deQueue: queue is empty" << '\n';
        }

        return std::nullopt;
    }

    constexpr void printQueue() {
        for(std::size_t i = head; i < MAX_SIZE; i++) {
            std::cout << circ_queue[i] << " ";
        }
        std::cout << '\n';
    }

private:
    std::array<T, MAX_SIZE> circ_queue{};
    int head;
    int tail;
};


#endif //DATASTRUCTURES_CIRCULARQUEUE_HPP
