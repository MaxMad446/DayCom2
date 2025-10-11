// Auto-generated module | 2026-05-12T04:30:16.213141
#include <iostream>
#include <vector>

int compute_660() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
