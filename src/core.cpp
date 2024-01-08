// Auto-generated module | 2026-05-14T18:17:43.496616
#include <iostream>
#include <vector>

int compute_145() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
