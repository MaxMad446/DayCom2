// Auto-generated module | 2026-05-14T18:25:39.086740
#include <iostream>
#include <vector>

int compute_135() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_135() << std::endl;
    return 0;
}
