// Auto-generated module | 2026-05-11T19:52:25.038601
#include <iostream>
#include <vector>

int compute_521() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
