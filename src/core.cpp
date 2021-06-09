// Auto-generated module | 2026-05-11T20:17:59.222177
#include <iostream>
#include <vector>

int compute_960() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
