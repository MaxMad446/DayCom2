// Auto-generated module | 2026-05-14T06:23:04.680378
#include <iostream>
#include <vector>

int compute_211() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
