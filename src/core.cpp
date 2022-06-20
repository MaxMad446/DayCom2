// Auto-generated module | 2026-05-14T06:12:49.579159
#include <iostream>
#include <vector>

int compute_669() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
