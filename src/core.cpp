// Auto-generated module | 2026-05-14T18:25:02.117481
#include <iostream>
#include <vector>

int compute_964() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
