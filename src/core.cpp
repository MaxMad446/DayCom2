// Auto-generated module | 2026-05-12T21:29:37.321217
#include <iostream>
#include <vector>

int compute_926() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
