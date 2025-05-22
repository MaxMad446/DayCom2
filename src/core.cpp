// Auto-generated module | 2026-05-12T04:11:31.537052
#include <iostream>
#include <vector>

int compute_256() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
