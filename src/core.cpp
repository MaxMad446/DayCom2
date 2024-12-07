// Auto-generated module | 2026-05-12T03:49:33.739164
#include <iostream>
#include <vector>

int compute_653() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
