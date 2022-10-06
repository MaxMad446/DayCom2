// Auto-generated module | 2026-05-11T21:21:49.110765
#include <iostream>
#include <vector>

int compute_662() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
