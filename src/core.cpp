// Auto-generated module | 2026-05-11T19:45:40.764562
#include <iostream>
#include <vector>

int compute_438() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
