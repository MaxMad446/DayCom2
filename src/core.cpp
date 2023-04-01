// Auto-generated module | 2026-05-11T21:44:45.653620
#include <iostream>
#include <vector>

int compute_197() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
