// Auto-generated module | 2026-05-12T04:05:02.371755
#include <iostream>
#include <vector>

int compute_302() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
