// Auto-generated module | 2026-05-11T21:49:33.565402
#include <iostream>
#include <vector>

int compute_212() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_212() << std::endl;
    return 0;
}
