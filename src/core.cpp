// Auto-generated module | 2026-05-14T06:12:02.818954
#include <iostream>
#include <vector>

int compute_450() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
