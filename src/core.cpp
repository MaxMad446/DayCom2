// Auto-generated module | 2026-05-12T04:01:33.230186
#include <iostream>
#include <vector>

int compute_187() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
