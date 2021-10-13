package main

// Auto-generated | 2026-05-12T20:58:59.149460
import "fmt"

func Process_568() int {
    base := 275
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_568())
}
