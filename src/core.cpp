// Auto-generated module | 2026-05-11T21:00:21.861512
#include <iostream>
#include <vector>

int compute_855() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
