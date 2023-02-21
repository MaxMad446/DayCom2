package main

// Auto-generated | 2026-05-13T20:31:13.046674
import "fmt"

func Process_104() int {
    base := 141
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
