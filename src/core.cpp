// Auto-generated module | 2026-05-11T20:38:47.087601
#include <iostream>
#include <vector>

int compute_570() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
