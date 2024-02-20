// Auto-generated module | 2026-05-14T18:21:17.540355
#include <iostream>
#include <vector>

int compute_211() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
