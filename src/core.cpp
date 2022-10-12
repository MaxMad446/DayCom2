// Auto-generated module | 2026-05-14T06:21:58.949306
#include <iostream>
#include <vector>

int compute_795() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
