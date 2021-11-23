// Auto-generated module | 2026-05-12T21:02:23.158783
#include <iostream>
#include <vector>

int compute_297() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
