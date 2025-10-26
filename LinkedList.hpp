#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <iostream>

// A node in a singly-linked list
template <typename T> struct Node {
    T data;
    Node<T>* next;
};

// A singly-linked list
template <typename T> class LinkedList {
  public:
    LinkedList<T>();
    virtual ~LinkedList<T>();
    void append(T data);
    void prepend(T data);
    void insert(T data, unsigned int idx);
    void remove(unsigned int idx);
    unsigned int size();
    void print();

  private:
    Node<T>* head_;
    unsigned int size_;
};

template <typename T> LinkedList<T>::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}

template <typename T> LinkedList<T>::~LinkedList() {
    Node<T>* curr = head_;
    while (curr) {
        Node<T>* prev = curr;
        curr = prev->next;
        delete prev;
    }
}

template <typename T> void LinkedList<T>::append(T data) {
    Node<T>* n = new Node<T>;
    n->data = data;
    n->next = nullptr;
    if (!head_) {
        // List is empty
        head_ = n;
    } else {
        Node<T>* prev = head_;
        while (prev->next) {
            prev = prev->next;
        }
        prev->next = n;
    }
    ++size_;
}

template <typename T> void LinkedList<T>::prepend(T data) {
    Node<T>* n = new Node<T>;
    n->data = data;
    n->next = nullptr;
    if (!head_) {
        // List is empty
        head_ = n;
    } else {
        Node<T>* h = head_;
        head_ = n;
        head_->next = h;
    }
    ++size_;
}

template <typename T> void LinkedList<T>::insert(T data, unsigned int idx) {
    if (idx > size_) return; // Invalid index provided
    Node<T>* n = new Node<T>;
    n->data = data;
    n->next = nullptr;
    if (idx == 0) {
        n->next = head_;
        head_ = n;
    } else {
        Node<T>* prev = head_;
        for (unsigned int i = 0; i < idx; ++i) {
            prev = prev->next;
        }
        n->next = prev->next;
        prev->next = n;
    }
    ++size_;
}

template <typename T> void LinkedList<T>::remove(unsigned int idx) {
    if (idx >= size_) return; // Invalid index provided
    if (idx == 0) {
        Node<T>* n = head_;
        head_ = n->next;
        delete n;
    } else {
        Node<T>* prev = head_;
        for (unsigned int i = 0; i < idx - 1; ++i) {
            prev = prev->next;
        }
        Node<T>* n = prev->next;
        prev->next = n->next;
        delete n;
    }
    --size_;
}

template <typename T> unsigned int LinkedList<T>::size() { return size_; }

template <typename T> void LinkedList<T>::print() {
    Node<T>* n = head_;
    std::cout << "[";
    while (n) {
        std::cout << n->data;
        if (n->next) {
            std::cout << ", ";
        }
        n = n->next;
    }
    std::cout << "]" << std::endl;
}

#endif // LINKED_LIST_HPP
