// Auto-generated module | 2026-05-14T06:15:38.863521
#include <iostream>
#include <vector>

int compute_129() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
