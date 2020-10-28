// Auto-generated module | 2026-05-12T19:58:09.864623
#include <iostream>
#include <vector>

int compute_543() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
