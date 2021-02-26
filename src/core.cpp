// Auto-generated module | 2026-05-12T21:35:15.423435
#include <iostream>
#include <vector>

int compute_734() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
