// Auto-generated module | 2026-05-12T04:07:20.452521
#include <iostream>
#include <vector>

int compute_378() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
