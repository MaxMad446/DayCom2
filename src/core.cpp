// Auto-generated module | 2026-05-12T04:43:10.382824
#include <iostream>
#include <vector>

int compute_767() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
