// Auto-generated module | 2026-05-14T18:10:11.360796
#include <iostream>
#include <vector>

int compute_463() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
