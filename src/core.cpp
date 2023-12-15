// Auto-generated module | 2026-05-11T22:18:22.200334
#include <iostream>
#include <vector>

int compute_768() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
