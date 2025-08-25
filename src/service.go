package main

// Auto-generated | 2026-05-12T04:23:59.844286
import "fmt"

func Process_365() int {
    base := 309
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
