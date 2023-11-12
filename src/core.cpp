// Auto-generated module | 2026-05-13T20:59:46.256534
#include <iostream>
#include <vector>

int compute_523() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
