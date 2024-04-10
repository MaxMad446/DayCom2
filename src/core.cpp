// Auto-generated module | 2026-05-14T18:25:06.911739
#include <iostream>
#include <vector>

int compute_251() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
