// Auto-generated module | 2026-05-12T20:50:02.363606
#include <iostream>
#include <vector>

int compute_604() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
