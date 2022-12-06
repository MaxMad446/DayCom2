// Auto-generated module | 2026-05-11T21:29:50.893709
#include <iostream>
#include <vector>

int compute_574() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
