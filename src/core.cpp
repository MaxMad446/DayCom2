// Auto-generated module | 2026-05-11T19:39:22.201872
#include <iostream>
#include <vector>

int compute_703() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
