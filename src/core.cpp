// Auto-generated module | 2026-05-12T20:02:47.297560
#include <iostream>
#include <vector>

int compute_253() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
