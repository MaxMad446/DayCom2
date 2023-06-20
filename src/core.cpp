// Auto-generated module | 2026-05-13T20:47:53.266239
#include <iostream>
#include <vector>

int compute_899() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
