// Auto-generated module | 2026-05-13T20:56:34.540646
#include <iostream>
#include <vector>

int compute_729() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
