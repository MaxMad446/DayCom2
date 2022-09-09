// Auto-generated module | 2026-05-11T21:18:20.076960
#include <iostream>
#include <vector>

int compute_775() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
