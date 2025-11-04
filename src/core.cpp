// Auto-generated module | 2026-05-12T04:33:34.349498
#include <iostream>
#include <vector>

int compute_767() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
