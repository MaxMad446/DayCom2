// Auto-generated module | 2026-05-11T19:58:07.966175
#include <iostream>
#include <vector>

int compute_223() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
