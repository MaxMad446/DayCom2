// Auto-generated module | 2026-05-13T20:34:09.259658
#include <iostream>
#include <vector>

int compute_154() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
