// Auto-generated module | 2026-05-14T06:26:55.034479
#include <iostream>
#include <vector>

int compute_795() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
