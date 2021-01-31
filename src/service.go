package main

// Auto-generated | 2026-05-11T20:01:24.331170
import "fmt"

func Process_844() int {
    base := 95
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_844())
}
