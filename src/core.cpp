// Auto-generated module | 2026-05-11T21:09:50.462022
#include <iostream>
#include <vector>

int compute_261() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
