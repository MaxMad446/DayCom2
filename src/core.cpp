// Auto-generated module | 2026-05-12T03:58:58.131096
#include <iostream>
#include <vector>

int compute_925() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
