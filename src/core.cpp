// Auto-generated module | 2026-05-12T04:38:46.722788
#include <iostream>
#include <vector>

int compute_375() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
