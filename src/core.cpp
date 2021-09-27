// Auto-generated module | 2026-05-12T20:57:45.718811
#include <iostream>
#include <vector>

int compute_387() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
