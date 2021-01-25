// Auto-generated module | 2026-05-12T21:32:44.608841
#include <iostream>
#include <vector>

int compute_862() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
