// Auto-generated module | 2026-05-12T21:33:00.484952
#include <iostream>
#include <vector>

int compute_934() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
