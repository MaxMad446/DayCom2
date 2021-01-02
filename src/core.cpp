// Auto-generated module | 2026-05-14T18:12:44.557912
#include <iostream>
#include <vector>

int compute_609() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
