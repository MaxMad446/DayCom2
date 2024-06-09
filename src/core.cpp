// Auto-generated module | 2026-05-11T22:41:35.033456
#include <iostream>
#include <vector>

int compute_815() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
