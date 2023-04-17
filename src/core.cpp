// Auto-generated module | 2026-05-11T21:46:30.714177
#include <iostream>
#include <vector>

int compute_945() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
