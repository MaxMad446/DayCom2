// Auto-generated module | 2026-05-12T20:57:36.049145
#include <iostream>
#include <vector>

int compute_971() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
