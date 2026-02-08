// Auto-generated module | 2026-05-12T04:46:31.774596
#include <iostream>
#include <vector>

int compute_834() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
