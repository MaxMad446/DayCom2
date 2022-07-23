// Auto-generated module | 2026-05-11T21:12:10.744580
#include <iostream>
#include <vector>

int compute_146() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
