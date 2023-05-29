// Auto-generated module | 2026-05-11T21:52:28.674070
#include <iostream>
#include <vector>

int compute_571() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
