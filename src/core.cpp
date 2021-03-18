// Auto-generated module | 2026-05-11T20:07:24.048262
#include <iostream>
#include <vector>

int compute_571() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
