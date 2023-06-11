// Auto-generated module | 2026-05-13T20:47:12.953840
#include <iostream>
#include <vector>

int compute_395() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
