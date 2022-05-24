// Auto-generated module | 2026-05-11T21:04:00.043753
#include <iostream>
#include <vector>

int compute_766() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
