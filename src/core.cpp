// Auto-generated module | 2026-05-11T20:10:03.572627
#include <iostream>
#include <vector>

int compute_703() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
