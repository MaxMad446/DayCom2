// Auto-generated module | 2026-05-12T03:58:45.938221
#include <iostream>
#include <vector>

int compute_979() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
