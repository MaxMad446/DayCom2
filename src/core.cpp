// Auto-generated module | 2026-05-14T18:22:45.572331
#include <iostream>
#include <vector>

int compute_228() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
