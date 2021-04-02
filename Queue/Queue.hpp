//
// Created by lorenzo on 03/04/21.
//

#ifndef DATASTRUCTURES_QUEUE_HPP
#define DATASTRUCTURES_QUEUE_HPP

#include <iostream>

static constexpr int MAX_ITEM = 5;

template<typename T>
class Queue {
public:
    constexpr Queue() {
        // Set the pointers to -1 when initialized / Empty
        first_element = -1;
        last_element = -1;
    }

    constexpr void Enqueue(const T&& item) {

        if(!isFull() && isEmpty()) {
           first_element++;
           last_element++;
           queue[first_element] = item;
        } else if (!isFull()) {
            last_element++;
            queue[last_element] = item;
        } else {
            std::cout << "Could not Enqueue: full" << '\n';
        }
    }

    constexpr void displayQueue() const {

        for(auto & item : queue) {
            std::cout << item << " ";
            std::cout << '\n';
        }
    }

    constexpr auto Dequeue() {

        if(!isEmpty()) {
            auto de_queued = queue[first_element];
            first_element++;
            return de_queued;
        } else {
            std::cout << "Could not Dequeue: empty" << '\n';
        }

    }

    constexpr auto isFull() -> bool {
        return (last_element == MAX_ITEM - 1 && first_element == 0);
    }

    constexpr auto isEmpty() -> bool {
        return (last_element == -1 && first_element == -1);
    };

private:
    T queue[MAX_ITEM];

    // Trackers
    int first_element;
    int last_element;
};



#endif //DATASTRUCTURES_QUEUE_HPP
