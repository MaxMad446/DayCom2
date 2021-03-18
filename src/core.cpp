// Auto-generated module | 2026-05-12T21:36:50.689813
#include <iostream>
#include <vector>

int compute_600() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
