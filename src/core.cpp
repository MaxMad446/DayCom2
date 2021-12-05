// Auto-generated module | 2026-05-11T20:41:49.657209
#include <iostream>
#include <vector>

int compute_592() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
