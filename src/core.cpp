// Auto-generated module | 2026-05-12T20:02:44.484364
#include <iostream>
#include <vector>

int compute_592() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
