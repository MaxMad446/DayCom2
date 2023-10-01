// Auto-generated module | 2026-05-13T20:56:19.150008
#include <iostream>
#include <vector>

int compute_615() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
