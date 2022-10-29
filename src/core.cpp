// Auto-generated module | 2026-05-11T21:24:45.738028
#include <iostream>
#include <vector>

int compute_926() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
