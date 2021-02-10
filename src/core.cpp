// Auto-generated module | 2026-05-11T20:02:48.782956
#include <iostream>
#include <vector>

int compute_932() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
