// Auto-generated module | 2026-05-11T21:09:56.234869
#include <iostream>
#include <vector>

int compute_565() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
