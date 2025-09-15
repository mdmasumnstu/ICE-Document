#include <iostream>
#include <thread>
#include <mutex>

std::mutex resource1;
std::mutex resource2;

void thread1() {
    // Lock resource1 first
    std::cout << "Thread 1 locking resource 1...\n";
    resource1.lock();
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // simulate work

    // Now try to lock resource2
    std::cout << "Thread 1 trying to lock resource 2...\n";
    resource2.lock();

    std::cout << "Thread 1 has locked both resources!\n";

    // Unlocking
    resource2.unlock();
    resource1.unlock();
}

void thread2() {
    // Lock resource2 first
    std::cout << "Thread 2 locking resource 2...\n";
    resource2.lock();
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // simulate work

    // Now try to lock resource1
    std::cout << "Thread 2 trying to lock resource 1...\n";
    resource1.lock();

    std::cout << "Thread 2 has locked both resources!\n";

    // Unlocking
    resource1.unlock();
    resource2.unlock();
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}

