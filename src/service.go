package main

// Auto-generated | 2026-05-12T04:38:25.404612
import "fmt"

func Process_110() int {
    base := 114
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
