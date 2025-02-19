// Auto-generated module | 2026-05-12T21:12:20.854964
#include <iostream>
#include <vector>

int compute_405() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
