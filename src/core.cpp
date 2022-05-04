// Auto-generated module | 2026-05-13T22:11:01.409362
#include <iostream>
#include <vector>

int compute_620() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
