// Auto-generated module | 2026-05-11T22:20:04.400996
#include <iostream>
#include <vector>

int compute_495() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
