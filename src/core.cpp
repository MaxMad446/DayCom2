// Auto-generated module | 2026-05-11T21:40:45.693830
#include <iostream>
#include <vector>

int compute_986() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
