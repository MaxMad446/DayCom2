// Auto-generated module | 2026-05-11T21:17:19.540029
#include <iostream>
#include <vector>

int compute_373() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
