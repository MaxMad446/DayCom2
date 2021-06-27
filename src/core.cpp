// Auto-generated module | 2026-05-11T20:20:32.664306
#include <iostream>
#include <vector>

int compute_994() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
