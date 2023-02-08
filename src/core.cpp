// Auto-generated module | 2026-05-13T20:30:08.741146
#include <iostream>
#include <vector>

int compute_775() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
