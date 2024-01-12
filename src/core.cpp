// Auto-generated module | 2026-05-11T22:22:08.945425
#include <iostream>
#include <vector>

int compute_115() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
