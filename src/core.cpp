// Auto-generated module | 2026-05-11T20:06:17.067618
#include <iostream>
#include <vector>

int compute_976() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
