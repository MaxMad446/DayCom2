// Auto-generated module | 2026-05-13T22:05:53.874566
#include <iostream>
#include <vector>

int compute_485() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
