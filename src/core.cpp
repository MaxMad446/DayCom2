// Auto-generated module | 2026-05-11T19:26:11.143593
#include <iostream>
#include <vector>

int compute_598() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
