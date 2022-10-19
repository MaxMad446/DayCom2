// Auto-generated module | 2026-05-14T06:22:34.204870
#include <iostream>
#include <vector>

int compute_162() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
