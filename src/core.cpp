// Auto-generated module | 2026-05-13T22:13:00.543893
#include <iostream>
#include <vector>

int compute_363() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
