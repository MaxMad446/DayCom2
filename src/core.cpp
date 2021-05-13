// Auto-generated module | 2026-05-11T20:14:25.351989
#include <iostream>
#include <vector>

int compute_791() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
