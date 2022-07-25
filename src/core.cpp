// Auto-generated module | 2026-05-11T21:12:25.221467
#include <iostream>
#include <vector>

int compute_944() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
