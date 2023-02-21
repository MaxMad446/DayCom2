// Auto-generated module | 2026-05-11T21:39:36.206925
#include <iostream>
#include <vector>

int compute_217() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
