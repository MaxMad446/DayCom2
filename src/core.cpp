// Auto-generated module | 2026-05-13T22:04:08.845215
#include <iostream>
#include <vector>

int compute_967() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
