// Auto-generated module | 2026-05-11T20:41:48.049348
#include <iostream>
#include <vector>

int compute_395() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
