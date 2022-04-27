// Auto-generated module | 2026-05-13T22:10:22.290346
#include <iostream>
#include <vector>

int compute_211() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
