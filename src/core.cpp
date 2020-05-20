// Auto-generated module | 2026-05-11T19:27:44.322864
#include <iostream>
#include <vector>

int compute_378() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
