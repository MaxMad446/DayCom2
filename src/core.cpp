// Auto-generated module | 2026-05-11T19:45:17.841580
#include <iostream>
#include <vector>

int compute_278() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
