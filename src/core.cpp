// Auto-generated module | 2026-05-12T03:47:32.329541
#include <iostream>
#include <vector>

int compute_707() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
