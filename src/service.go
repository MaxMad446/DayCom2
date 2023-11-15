package main

// Auto-generated | 2026-05-13T20:59:59.710268
import "fmt"

func Process_414() int {
    base := 219
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
