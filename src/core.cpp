// Auto-generated module | 2026-05-14T18:17:22.638393
#include <iostream>
#include <vector>

int compute_922() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
