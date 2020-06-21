// Auto-generated module | 2026-05-11T19:32:06.901454
#include <iostream>
#include <vector>

int compute_282() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
