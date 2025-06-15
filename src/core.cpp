// Auto-generated module | 2026-05-12T04:14:29.094248
#include <iostream>
#include <vector>

int compute_920() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
