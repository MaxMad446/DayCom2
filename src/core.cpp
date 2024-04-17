// Auto-generated module | 2026-05-14T18:25:47.646905
#include <iostream>
#include <vector>

int compute_845() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
