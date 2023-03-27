// Auto-generated module | 2026-05-11T21:44:02.497254
#include <iostream>
#include <vector>

int compute_977() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
