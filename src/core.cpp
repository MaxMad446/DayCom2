// Auto-generated module | 2026-05-11T21:50:27.991954
#include <iostream>
#include <vector>

int compute_645() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
