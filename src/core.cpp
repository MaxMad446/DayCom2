// Auto-generated module | 2026-05-13T22:09:50.414283
#include <iostream>
#include <vector>

int compute_748() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
