// Auto-generated module | 2026-05-11T21:09:23.212665
#include <iostream>
#include <vector>

int compute_671() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
