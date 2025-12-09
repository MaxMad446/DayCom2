// Auto-generated module | 2026-05-12T04:38:05.795400
#include <iostream>
#include <vector>

int compute_189() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
