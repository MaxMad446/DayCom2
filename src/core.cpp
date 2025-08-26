// Auto-generated module | 2026-05-12T04:24:04.030906
#include <iostream>
#include <vector>

int compute_285() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
