// Auto-generated module | 2026-05-14T18:13:07.207354
#include <iostream>
#include <vector>

int compute_742() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
