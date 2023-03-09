// Auto-generated module | 2026-05-13T20:32:38.526041
#include <iostream>
#include <vector>

int compute_461() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
