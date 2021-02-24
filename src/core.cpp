// Auto-generated module | 2026-05-11T20:04:43.129152
#include <iostream>
#include <vector>

int compute_779() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
