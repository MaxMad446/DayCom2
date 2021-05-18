// Auto-generated module | 2026-05-12T20:46:13.924608
#include <iostream>
#include <vector>

int compute_926() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
