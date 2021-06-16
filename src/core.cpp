// Auto-generated module | 2026-05-12T20:48:46.527069
#include <iostream>
#include <vector>

int compute_401() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
