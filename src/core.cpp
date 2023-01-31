// Auto-generated module | 2026-05-11T21:37:04.674232
#include <iostream>
#include <vector>

int compute_718() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
