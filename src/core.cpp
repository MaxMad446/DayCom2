// Auto-generated module | 2026-05-11T20:34:23.105871
#include <iostream>
#include <vector>

int compute_409() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
