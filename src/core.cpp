// Auto-generated module | 2026-05-11T21:02:19.229722
#include <iostream>
#include <vector>

int compute_650() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
