// Auto-generated module | 2026-05-12T04:42:44.515634
#include <iostream>
#include <vector>

int compute_977() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
