// Auto-generated module | 2026-05-14T06:11:35.748484
#include <iostream>
#include <vector>

int compute_754() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
