// Auto-generated module | 2026-05-12T04:45:12.396444
#include <iostream>
#include <vector>

int compute_857() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
