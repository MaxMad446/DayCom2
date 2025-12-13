package main

// Auto-generated | 2026-05-12T04:38:49.224336
import "fmt"

func Process_381() int {
    base := 203
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}
