// Auto-generated module | 2026-05-11T19:29:51.970328
#include <iostream>
#include <vector>

int compute_742() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
