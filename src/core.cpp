// Auto-generated module | 2026-05-12T21:21:42.234107
#include <iostream>
#include <vector>

int compute_548() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
