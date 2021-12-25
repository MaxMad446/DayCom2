// Auto-generated module | 2026-05-12T21:05:08.872382
#include <iostream>
#include <vector>

int compute_956() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
