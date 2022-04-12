package main

// Auto-generated | 2026-05-11T20:58:18.695937
import "fmt"

func Process_110() int {
    base := 26
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
