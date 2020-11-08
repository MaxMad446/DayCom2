// Auto-generated module | 2026-05-14T18:05:17.248920
#include <iostream>
#include <vector>

int compute_983() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
