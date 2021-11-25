// Auto-generated module | 2026-05-12T21:02:35.545388
#include <iostream>
#include <vector>

int compute_945() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
