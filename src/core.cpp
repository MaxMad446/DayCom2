// Auto-generated module | 2026-05-12T21:02:10.489865
#include <iostream>
#include <vector>

int compute_447() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
