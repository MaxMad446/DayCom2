// Auto-generated module | 2026-05-11T20:13:11.293943
#include <iostream>
#include <vector>

int compute_497() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
