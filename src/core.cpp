// Auto-generated module | 2026-05-11T22:45:35.410326
#include <iostream>
#include <vector>

int compute_457() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
