// Auto-generated module | 2026-05-13T21:00:23.048580
#include <iostream>
#include <vector>

int compute_529() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
