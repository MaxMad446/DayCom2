// Auto-generated module | 2026-05-12T20:02:30.116709
#include <iostream>
#include <vector>

int compute_209() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
