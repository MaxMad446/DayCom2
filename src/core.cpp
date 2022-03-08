// Auto-generated module | 2026-05-13T22:06:02.990940
#include <iostream>
#include <vector>

int compute_645() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
