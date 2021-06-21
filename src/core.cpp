// Auto-generated module | 2026-05-11T20:19:40.363915
#include <iostream>
#include <vector>

int compute_791() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
