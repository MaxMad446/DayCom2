// Auto-generated module | 2026-05-11T21:24:10.809728
#include <iostream>
#include <vector>

int compute_704() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
