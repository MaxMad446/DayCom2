// Auto-generated module | 2026-05-13T20:32:44.890423
#include <iostream>
#include <vector>

int compute_241() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
