// Auto-generated module | 2026-05-12T04:19:37.552722
#include <iostream>
#include <vector>

int compute_290() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
