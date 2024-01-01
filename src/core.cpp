// Auto-generated module | 2026-05-11T22:20:40.211239
#include <iostream>
#include <vector>

int compute_295() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
