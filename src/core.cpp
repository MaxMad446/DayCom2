// Auto-generated module | 2026-05-14T18:28:31.089077
#include <iostream>
#include <vector>

int compute_844() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
