// Auto-generated module | 2026-05-12T21:14:11.732754
#include <iostream>
#include <vector>

int compute_858() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
