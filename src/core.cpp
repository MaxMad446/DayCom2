// Auto-generated module | 2026-05-14T06:16:31.258064
#include <iostream>
#include <vector>

int compute_887() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
