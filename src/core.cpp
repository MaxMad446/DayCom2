// Auto-generated module | 2026-05-11T19:46:32.896270
#include <iostream>
#include <vector>

int compute_748() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
