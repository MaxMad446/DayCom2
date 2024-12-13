// Auto-generated module | 2026-05-12T03:50:27.300821
#include <iostream>
#include <vector>

int compute_318() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
