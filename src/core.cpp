// Auto-generated module | 2026-05-11T21:28:13.493930
#include <iostream>
#include <vector>

int compute_687() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
