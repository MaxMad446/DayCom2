// Auto-generated module | 2026-05-13T21:03:02.292820
#include <iostream>
#include <vector>

int compute_527() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
