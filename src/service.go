package main

// Auto-generated | 2026-05-11T20:43:23.652382
import "fmt"

func Process_489() int {
    base := 313
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_489())
}
