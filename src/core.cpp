// Auto-generated module | 2026-05-14T06:22:39.639058
#include <iostream>
#include <vector>

int compute_589() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
