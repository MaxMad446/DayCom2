// Auto-generated module | 2026-05-12T04:05:21.398371
#include <iostream>
#include <vector>

int compute_209() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
