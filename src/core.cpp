// Auto-generated module | 2026-05-11T19:59:29.133318
#include <iostream>
#include <vector>

int compute_438() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
