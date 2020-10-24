// Auto-generated module | 2026-05-12T19:57:46.864508
#include <iostream>
#include <vector>

int compute_534() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
