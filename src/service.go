package main

// Auto-generated | 2026-05-12T21:08:18.151041
import "fmt"

func Process_791() int {
    base := 110
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
