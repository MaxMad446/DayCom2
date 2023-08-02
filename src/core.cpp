// Auto-generated module | 2026-05-13T20:51:19.913577
#include <iostream>
#include <vector>

int compute_200() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
