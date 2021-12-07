// Auto-generated module | 2026-05-12T21:03:36.028050
#include <iostream>
#include <vector>

int compute_507() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
