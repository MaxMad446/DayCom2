// Auto-generated module | 2026-05-12T03:43:25.402187
#include <iostream>
#include <vector>

int compute_613() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
