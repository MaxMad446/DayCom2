// Auto-generated module | 2026-05-14T06:25:20.422379
#include <iostream>
#include <vector>

int compute_165() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
