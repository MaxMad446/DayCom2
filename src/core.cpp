// Auto-generated module | 2026-05-14T06:23:15.119285
#include <iostream>
#include <vector>

int compute_545() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
