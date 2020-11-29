// Auto-generated module | 2026-05-14T18:07:58.828281
#include <iostream>
#include <vector>

int compute_929() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
