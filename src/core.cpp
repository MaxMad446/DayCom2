// Auto-generated module | 2026-05-11T19:50:14.478005
#include <iostream>
#include <vector>

int compute_200() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
