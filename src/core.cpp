// Auto-generated module | 2026-05-14T18:20:47.196296
#include <iostream>
#include <vector>

int compute_134() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
