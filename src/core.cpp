// Auto-generated module | 2026-05-12T04:34:19.195540
#include <iostream>
#include <vector>

int compute_856() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
