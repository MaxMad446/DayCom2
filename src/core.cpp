// Auto-generated module | 2026-05-11T20:50:42.140749
#include <iostream>
#include <vector>

int compute_748() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
