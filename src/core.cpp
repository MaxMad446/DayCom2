// Auto-generated module | 2026-05-11T21:18:37.057706
#include <iostream>
#include <vector>

int compute_845() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
