// Auto-generated module | 2026-05-12T04:17:08.180652
#include <iostream>
#include <vector>

int compute_230() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
