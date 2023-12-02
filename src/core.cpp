// Auto-generated module | 2026-05-13T21:01:27.052633
#include <iostream>
#include <vector>

int compute_721() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
