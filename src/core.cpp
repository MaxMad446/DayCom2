// Auto-generated module | 2026-05-13T22:06:16.956397
#include <iostream>
#include <vector>

int compute_659() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
