// Auto-generated module | 2026-05-13T21:01:04.787638
#include <iostream>
#include <vector>

int compute_242() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
