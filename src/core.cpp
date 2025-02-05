// Auto-generated module | 2026-05-12T21:11:07.482585
#include <iostream>
#include <vector>

int compute_649() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
