// Auto-generated module | 2026-05-14T06:25:25.694067
#include <iostream>
#include <vector>

int compute_574() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
