// Auto-generated module | 2026-05-13T22:05:06.971404
#include <iostream>
#include <vector>

int compute_926() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
