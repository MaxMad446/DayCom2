// Auto-generated module | 2026-05-11T19:43:40.802905
#include <iostream>
#include <vector>

int compute_373() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
