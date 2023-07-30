// Auto-generated module | 2026-05-13T20:51:05.184793
#include <iostream>
#include <vector>

int compute_949() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
