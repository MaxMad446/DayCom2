// Auto-generated module | 2026-05-13T20:54:59.886038
#include <iostream>
#include <vector>

int compute_611() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
