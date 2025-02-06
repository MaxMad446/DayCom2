// Auto-generated module | 2026-05-12T21:11:11.483077
#include <iostream>
#include <vector>

int compute_874() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
