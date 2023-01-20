// Auto-generated module | 2026-05-11T21:35:42.350971
#include <iostream>
#include <vector>

int compute_673() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
