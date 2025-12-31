// Auto-generated module | 2026-05-12T04:41:22.493514
#include <iostream>
#include <vector>

int compute_685() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
