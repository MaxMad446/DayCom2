// Auto-generated module | 2026-05-14T06:16:28.614925
#include <iostream>
#include <vector>

int compute_365() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
