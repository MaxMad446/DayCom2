// Auto-generated module | 2026-05-11T22:16:04.809479
#include <iostream>
#include <vector>

int compute_330() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
