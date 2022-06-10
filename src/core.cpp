// Auto-generated module | 2026-05-14T06:12:00.508719
#include <iostream>
#include <vector>

int compute_974() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
