// Auto-generated module | 2026-05-11T22:15:25.037956
#include <iostream>
#include <vector>

int compute_395() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
