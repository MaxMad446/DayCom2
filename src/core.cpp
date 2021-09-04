// Auto-generated module | 2026-05-12T20:55:35.107210
#include <iostream>
#include <vector>

int compute_748() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
