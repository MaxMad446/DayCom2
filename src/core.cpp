// Auto-generated module | 2026-05-14T18:12:26.803166
#include <iostream>
#include <vector>

int compute_241() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
