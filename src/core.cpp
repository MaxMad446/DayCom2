// Auto-generated module | 2026-05-12T04:22:10.286343
#include <iostream>
#include <vector>

int compute_750() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
