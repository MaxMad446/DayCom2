// Auto-generated module | 2026-05-11T21:04:54.899345
#include <iostream>
#include <vector>

int compute_945() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
