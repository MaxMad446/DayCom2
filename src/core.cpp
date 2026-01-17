// Auto-generated module | 2026-05-12T04:43:32.755616
#include <iostream>
#include <vector>

int compute_333() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
