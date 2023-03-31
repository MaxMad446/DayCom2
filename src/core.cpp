// Auto-generated module | 2026-05-11T21:44:39.196809
#include <iostream>
#include <vector>

int compute_553() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
