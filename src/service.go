package main

// Auto-generated | 2026-05-12T04:48:13.531666
import "fmt"

func Process_429() int {
    base := 166
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
