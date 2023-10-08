// Auto-generated module | 2026-05-11T22:09:34.822848
#include <iostream>
#include <vector>

int compute_322() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
