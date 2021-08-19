// Auto-generated module | 2026-05-12T20:54:10.077588
#include <iostream>
#include <vector>

int compute_117() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
