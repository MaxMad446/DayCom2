// Auto-generated module | 2026-05-14T06:26:08.696338
#include <iostream>
#include <vector>

int compute_900() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
