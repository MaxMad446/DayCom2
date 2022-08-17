// Auto-generated module | 2026-05-14T06:17:27.593857
#include <iostream>
#include <vector>

int compute_748() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
