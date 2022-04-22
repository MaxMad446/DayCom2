// Auto-generated module | 2026-05-13T22:09:59.375805
#include <iostream>
#include <vector>

int compute_245() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
