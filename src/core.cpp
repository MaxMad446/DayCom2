// Auto-generated module | 2026-05-14T18:11:59.869525
#include <iostream>
#include <vector>

int compute_246() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
