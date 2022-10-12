// Auto-generated module | 2026-05-14T06:21:58.062447
#include <iostream>
#include <vector>

int compute_869() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
