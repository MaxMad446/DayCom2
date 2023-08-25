// Auto-generated module | 2026-05-13T20:53:10.427784
#include <iostream>
#include <vector>

int compute_685() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
