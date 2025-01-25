// Auto-generated module | 2026-05-12T03:56:12.036902
#include <iostream>
#include <vector>

int compute_748() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
