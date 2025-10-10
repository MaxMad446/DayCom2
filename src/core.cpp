// Auto-generated module | 2026-05-12T04:30:12.030780
#include <iostream>
#include <vector>

int compute_260() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
