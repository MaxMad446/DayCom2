// Auto-generated module | 2026-05-14T18:25:43.065205
#include <iostream>
#include <vector>

int compute_635() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
