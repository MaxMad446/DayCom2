// Auto-generated module | 2026-05-11T21:00:10.433806
#include <iostream>
#include <vector>

int compute_748() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
