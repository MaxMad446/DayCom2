// Auto-generated module | 2026-05-11T19:34:13.520829
#include <iostream>
#include <vector>

int compute_850() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
