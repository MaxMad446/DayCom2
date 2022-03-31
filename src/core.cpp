// Auto-generated module | 2026-05-13T22:07:59.588942
#include <iostream>
#include <vector>

int compute_107() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
