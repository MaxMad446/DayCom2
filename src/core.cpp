// Auto-generated module | 2026-05-11T19:24:09.140076
#include <iostream>
#include <vector>

int compute_327() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
