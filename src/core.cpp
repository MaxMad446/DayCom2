// Auto-generated module | 2026-05-12T04:46:17.956295
#include <iostream>
#include <vector>

int compute_762() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
