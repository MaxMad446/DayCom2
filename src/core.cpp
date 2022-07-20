// Auto-generated module | 2026-05-14T06:15:12.775044
#include <iostream>
#include <vector>

int compute_623() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
