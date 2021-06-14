// Auto-generated module | 2026-05-12T20:48:37.875255
#include <iostream>
#include <vector>

int compute_780() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
