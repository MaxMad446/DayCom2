// Auto-generated module | 2026-05-12T04:44:18.276214
#include <iostream>
#include <vector>

int compute_579() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
