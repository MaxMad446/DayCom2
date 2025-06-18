// Auto-generated module | 2026-05-12T21:22:19.335032
#include <iostream>
#include <vector>

int compute_378() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
