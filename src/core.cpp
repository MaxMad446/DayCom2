// Auto-generated module | 2026-05-12T21:18:44.126825
#include <iostream>
#include <vector>

int compute_412() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
