// Auto-generated module | 2026-05-12T04:14:04.944778
#include <iostream>
#include <vector>

int compute_471() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
