// Auto-generated module | 2026-05-11T22:46:52.202572
#include <iostream>
#include <vector>

int compute_748() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
