// Auto-generated module | 2026-05-11T20:29:13.520250
#include <iostream>
#include <vector>

int compute_571() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
