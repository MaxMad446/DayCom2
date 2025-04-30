// Auto-generated module | 2026-05-12T04:08:44.608767
#include <iostream>
#include <vector>

int compute_542() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
