// Auto-generated module | 2026-05-13T20:32:41.067944
#include <iostream>
#include <vector>

int compute_939() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
