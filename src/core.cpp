// Auto-generated module | 2026-05-12T21:11:36.393083
#include <iostream>
#include <vector>

int compute_331() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
