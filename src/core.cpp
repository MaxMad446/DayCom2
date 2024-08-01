// Auto-generated module | 2026-05-11T22:48:34.367975
#include <iostream>
#include <vector>

int compute_396() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
