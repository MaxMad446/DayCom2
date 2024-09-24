package main

// Auto-generated | 2026-05-12T03:39:57.354056
import "fmt"

func Process_907() int {
    base := 40
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_907())
}
