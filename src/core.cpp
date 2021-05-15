// Auto-generated module | 2026-05-11T20:14:40.429042
#include <iostream>
#include <vector>

int compute_926() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
