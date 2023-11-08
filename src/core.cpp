// Auto-generated module | 2026-05-13T20:59:26.923838
#include <iostream>
#include <vector>

int compute_659() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
