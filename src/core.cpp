// Auto-generated module | 2026-05-14T18:25:08.079336
#include <iostream>
#include <vector>

int compute_517() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
