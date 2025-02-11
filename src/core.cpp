// Auto-generated module | 2026-05-12T03:58:24.482303
#include <iostream>
#include <vector>

int compute_801() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
