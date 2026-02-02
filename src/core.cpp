// Auto-generated module | 2026-05-12T04:45:41.361922
#include <iostream>
#include <vector>

int compute_242() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
