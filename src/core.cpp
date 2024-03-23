// Auto-generated module | 2026-05-14T18:23:45.700766
#include <iostream>
#include <vector>

int compute_763() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
