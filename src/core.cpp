// Auto-generated module | 2026-05-11T21:09:27.112344
#include <iostream>
#include <vector>

int compute_986() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
