// Auto-generated module | 2026-05-13T20:49:03.822762
#include <iostream>
#include <vector>

int compute_543() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
