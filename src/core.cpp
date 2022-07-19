// Auto-generated module | 2026-05-11T21:11:36.078580
#include <iostream>
#include <vector>

int compute_990() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
