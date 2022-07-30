// Auto-generated module | 2026-05-14T06:16:00.690770
#include <iostream>
#include <vector>

int compute_993() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
