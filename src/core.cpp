// Auto-generated module | 2026-05-14T06:26:29.626764
#include <iostream>
#include <vector>

int compute_714() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
