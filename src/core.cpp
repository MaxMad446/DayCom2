// Auto-generated module | 2026-05-11T19:52:01.147095
#include <iostream>
#include <vector>

int compute_605() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
