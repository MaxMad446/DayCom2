// Auto-generated module | 2026-05-14T06:22:23.638226
#include <iostream>
#include <vector>

int compute_653() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
