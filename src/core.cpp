// Auto-generated module | 2026-05-14T06:14:11.939948
#include <iostream>
#include <vector>

int compute_368() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
