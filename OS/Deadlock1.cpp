#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mutex1;
std::mutex mutex2;

void thread1() {
    std::lock_guard<std::mutex> lock1(mutex1);
    std::cout << "Thread 1 acquired mutex1\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Thread 1 trying to acquire mutex2...\n";
    std::lock_guard<std::mutex> lock2(mutex2); // waits for mutex2 (held by thread2)
    std::cout << "Thread 1 acquired mutex2\n";
}
void thread2() {
    std::lock_guard<std::mutex> lock2(mutex2);
    std::cout << "Thread 2 acquired mutex2\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Thread 2 trying to acquire mutex1...\n";   
    std::lock_guard<std::mutex> lock1(mutex1); // waits for mutex1 (held by thread1)
    std::cout << "Thread 2 acquired mutex1\n";
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    std::cout << "Program finished.\n";
    return 0;
}

