// Auto-generated module | 2026-05-11T22:04:46.367081
#include <iostream>
#include <vector>

int compute_201() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
