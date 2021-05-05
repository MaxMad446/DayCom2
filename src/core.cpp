// Auto-generated module | 2026-05-11T20:13:19.782250
#include <iostream>
#include <vector>

int compute_332() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
