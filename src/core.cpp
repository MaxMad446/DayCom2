// Auto-generated module | 2026-05-11T22:36:10.573627
#include <iostream>
#include <vector>

int compute_214() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
