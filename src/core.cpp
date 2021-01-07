// Auto-generated module | 2026-05-12T21:31:18.521257
#include <iostream>
#include <vector>

int compute_567() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
