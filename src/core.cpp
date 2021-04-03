// Auto-generated module | 2026-05-12T20:42:32.322335
#include <iostream>
#include <vector>

int compute_195() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
