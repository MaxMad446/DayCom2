// Auto-generated module | 2026-05-12T03:49:29.482052
#include <iostream>
#include <vector>

int compute_721() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
