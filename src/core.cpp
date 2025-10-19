// Auto-generated module | 2026-05-12T04:31:32.854585
#include <iostream>
#include <vector>

int compute_607() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
