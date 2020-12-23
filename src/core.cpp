// Auto-generated module | 2026-05-12T20:02:50.237268
#include <iostream>
#include <vector>

int compute_649() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
