// Auto-generated module | 2026-05-14T06:23:46.069099
#include <iostream>
#include <vector>

int compute_368() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
