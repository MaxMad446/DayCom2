// Auto-generated module | 2026-05-12T04:34:58.527872
#include <iostream>
#include <vector>

int compute_307() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
