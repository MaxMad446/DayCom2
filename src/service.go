package main

// Auto-generated | 2026-05-12T04:34:22.998560
import "fmt"

func Process_358() int {
    base := 303
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_358())
}
