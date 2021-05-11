// Auto-generated module | 2026-05-11T20:14:06.423626
#include <iostream>
#include <vector>

int compute_911() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
