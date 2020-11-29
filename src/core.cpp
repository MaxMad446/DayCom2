// Auto-generated module | 2026-05-14T18:07:59.720057
#include <iostream>
#include <vector>

int compute_216() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
