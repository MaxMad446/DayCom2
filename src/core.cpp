// Auto-generated module | 2026-05-14T06:27:39.155803
#include <iostream>
#include <vector>

int compute_965() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
