// Auto-generated module | 2026-05-12T04:35:49.128985
#include <iostream>
#include <vector>

int compute_685() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
