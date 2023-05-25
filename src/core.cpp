// Auto-generated module | 2026-05-13T20:38:58.039472
#include <iostream>
#include <vector>

int compute_671() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
