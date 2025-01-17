// Auto-generated module | 2026-05-12T03:55:08.980231
#include <iostream>
#include <vector>

int compute_714() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
