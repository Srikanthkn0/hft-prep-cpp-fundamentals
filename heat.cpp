#include <iostream>
#include <thread>
#include <vector>
#include <cmath>

void burn_cpu() {
    volatile double x = 0.0;
    while (true) {
        for (int i = 0; i < 1000000; ++i) {
            x += std::sin(i) * std::cos(i);
        }
    }
}

int main() {
    unsigned int n = std::thread::hardware_concurrency();
    if (n == 0) n = 4; // fallback if detection fails

    std::cout << "Starting " << n << " threads...\n";

    std::vector<std::thread> threads;
    threads.reserve(n);
    for (unsigned int i = 0; i < n; ++i) {
        threads.emplace_back(burn_cpu);
    }

    for (auto &t : threads) t.join();
    return 0;
}