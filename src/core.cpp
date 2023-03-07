// Auto-generated module | 2026-05-11T21:41:32.993365
#include <iostream>
#include <vector>

int compute_124() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
