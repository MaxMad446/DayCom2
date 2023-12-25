// Auto-generated module | 2026-05-13T21:03:23.920875
#include <iostream>
#include <vector>

int compute_751() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
