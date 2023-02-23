// Auto-generated module | 2026-05-13T20:31:25.976006
#include <iostream>
#include <vector>

int compute_578() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
