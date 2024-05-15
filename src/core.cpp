// Auto-generated module | 2026-05-11T22:38:28.183619
#include <iostream>
#include <vector>

int compute_888() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
