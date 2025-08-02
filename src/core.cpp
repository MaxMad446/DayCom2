// Auto-generated module | 2026-05-12T04:20:57.178580
#include <iostream>
#include <vector>

int compute_806() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
