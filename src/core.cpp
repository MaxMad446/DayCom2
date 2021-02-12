// Auto-generated module | 2026-05-12T21:34:11.803889
#include <iostream>
#include <vector>

int compute_378() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
