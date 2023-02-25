// Auto-generated module | 2026-05-13T20:31:34.184381
#include <iostream>
#include <vector>

int compute_277() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
