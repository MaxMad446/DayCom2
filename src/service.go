package main

// Auto-generated | 2026-05-12T04:00:41.454837
import "fmt"

func Process_486() int {
    base := 64
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
