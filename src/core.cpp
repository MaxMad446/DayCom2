// Auto-generated module | 2026-05-12T03:49:59.565392
#include <iostream>
#include <vector>

int compute_523() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
