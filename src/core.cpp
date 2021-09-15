// Auto-generated module | 2026-05-11T20:30:52.209267
#include <iostream>
#include <vector>

int compute_805() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
