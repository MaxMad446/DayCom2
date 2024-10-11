// Auto-generated module | 2026-05-12T03:42:12.424068
#include <iostream>
#include <vector>

int compute_500() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
