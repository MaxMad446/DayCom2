// Auto-generated module | 2026-05-12T04:24:25.355338
#include <iostream>
#include <vector>

int compute_652() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
