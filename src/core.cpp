// Auto-generated module | 2026-05-11T22:47:50.659644
#include <iostream>
#include <vector>

int compute_925() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
