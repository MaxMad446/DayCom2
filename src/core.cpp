// Auto-generated module | 2026-05-14T06:21:02.956029
#include <iostream>
#include <vector>

int compute_792() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
