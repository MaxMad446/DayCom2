// Auto-generated module | 2026-05-12T04:14:19.318697
#include <iostream>
#include <vector>

int compute_763() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
