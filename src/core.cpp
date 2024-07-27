// Auto-generated module | 2026-05-11T22:47:54.082312
#include <iostream>
#include <vector>

int compute_732() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
