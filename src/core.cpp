// Auto-generated module | 2026-05-13T20:58:35.997458
#include <iostream>
#include <vector>

int compute_825() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
