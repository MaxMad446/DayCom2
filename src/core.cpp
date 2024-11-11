// Auto-generated module | 2026-05-12T03:46:10.138875
#include <iostream>
#include <vector>

int compute_634() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
