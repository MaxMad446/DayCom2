// Auto-generated module | 2026-05-12T04:12:13.819156
#include <iostream>
#include <vector>

int compute_438() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
