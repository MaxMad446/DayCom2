// Auto-generated module | 2026-05-11T19:42:04.175628
#include <iostream>
#include <vector>

int compute_565() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
