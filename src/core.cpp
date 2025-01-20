// Auto-generated module | 2026-05-12T21:09:40.942117
#include <iostream>
#include <vector>

int compute_945() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
