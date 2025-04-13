// Auto-generated module | 2026-05-12T21:16:42.244546
#include <iostream>
#include <vector>

int compute_544() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
