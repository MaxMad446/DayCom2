// Auto-generated module | 2026-05-12T20:42:54.359721
#include <iostream>
#include <vector>

int compute_411() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
