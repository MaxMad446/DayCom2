package main

// Auto-generated | 2026-05-12T20:40:13.074443
import "fmt"

func Process_713() int {
    base := 259
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}
