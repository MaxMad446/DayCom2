// Auto-generated module | 2026-05-12T21:18:47.049760
#include <iostream>
#include <vector>

int compute_748() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
