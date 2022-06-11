// Auto-generated module | 2026-05-14T06:12:01.993603
#include <iostream>
#include <vector>

int compute_319() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
