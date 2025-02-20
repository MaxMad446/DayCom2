// Auto-generated module | 2026-05-12T03:59:39.607926
#include <iostream>
#include <vector>

int compute_548() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
