// Auto-generated module | 2026-05-11T22:37:05.822480
#include <iostream>
#include <vector>

int compute_815() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
