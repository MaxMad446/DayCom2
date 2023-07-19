// Auto-generated module | 2026-05-13T20:50:16.324953
#include <iostream>
#include <vector>

int compute_382() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
