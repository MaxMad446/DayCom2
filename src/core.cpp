// Auto-generated module | 2026-05-13T20:59:07.216268
#include <iostream>
#include <vector>

int compute_775() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
