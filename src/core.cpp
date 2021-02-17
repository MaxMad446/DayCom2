// Auto-generated module | 2026-05-12T21:34:30.636656
#include <iostream>
#include <vector>

int compute_812() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
