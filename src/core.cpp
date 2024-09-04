// Auto-generated module | 2026-05-11T22:52:49.161007
#include <iostream>
#include <vector>

int compute_409() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
