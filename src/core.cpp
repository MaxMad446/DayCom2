// Auto-generated module | 2026-05-11T20:23:10.942620
#include <iostream>
#include <vector>

int compute_465() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
