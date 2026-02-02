// Auto-generated module | 2026-05-12T04:45:42.992945
#include <iostream>
#include <vector>

int compute_350() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
