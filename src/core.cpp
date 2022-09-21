// Auto-generated module | 2026-05-11T21:19:53.313281
#include <iostream>
#include <vector>

int compute_748() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
