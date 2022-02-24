// Auto-generated module | 2026-05-13T22:05:01.381457
#include <iostream>
#include <vector>

int compute_845() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
