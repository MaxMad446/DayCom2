// Auto-generated module | 2026-05-14T18:18:41.623529
#include <iostream>
#include <vector>

int compute_853() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
