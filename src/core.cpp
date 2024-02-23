// Auto-generated module | 2026-05-11T22:27:49.873217
#include <iostream>
#include <vector>

int compute_748() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
