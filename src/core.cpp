// Auto-generated module | 2026-05-13T22:09:00.765089
#include <iostream>
#include <vector>

int compute_291() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
