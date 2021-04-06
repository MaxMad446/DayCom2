// Auto-generated module | 2026-05-11T20:09:45.680633
#include <iostream>
#include <vector>

int compute_929() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
