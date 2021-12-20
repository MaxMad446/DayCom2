// Auto-generated module | 2026-05-12T21:04:42.958209
#include <iostream>
#include <vector>

int compute_409() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
