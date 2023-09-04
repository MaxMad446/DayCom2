// Auto-generated module | 2026-05-13T20:54:00.406133
#include <iostream>
#include <vector>

int compute_232() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
