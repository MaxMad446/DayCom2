// Auto-generated module | 2026-05-11T19:56:09.391514
#include <iostream>
#include <vector>

int compute_955() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
