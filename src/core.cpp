// Auto-generated module | 2026-05-11T22:52:18.717817
#include <iostream>
#include <vector>

int compute_393() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
