// Auto-generated module | 2026-05-14T06:25:24.356741
#include <iostream>
#include <vector>

int compute_297() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
