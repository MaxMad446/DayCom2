// Auto-generated module | 2026-05-14T06:19:27.330887
#include <iostream>
#include <vector>

int compute_687() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
