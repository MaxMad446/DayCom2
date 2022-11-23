// Auto-generated module | 2026-05-11T21:28:02.254994
#include <iostream>
#include <vector>

int compute_399() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
