// Auto-generated module | 2026-05-14T06:18:17.779389
#include <iostream>
#include <vector>

int compute_851() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
