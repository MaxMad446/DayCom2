// Auto-generated module | 2026-05-11T20:35:11.048817
#include <iostream>
#include <vector>

int compute_232() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
