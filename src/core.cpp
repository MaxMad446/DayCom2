// Auto-generated module | 2026-05-12T06:19:02.474786
#include <iostream>
#include <vector>

int compute_734() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
