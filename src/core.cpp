// Auto-generated module | 2026-05-11T21:33:19.219102
#include <iostream>
#include <vector>

int compute_877() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
