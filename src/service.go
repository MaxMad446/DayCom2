package main

// Auto-generated | 2026-05-12T21:27:15.809081
import "fmt"

func Process_492() int {
    base := 470
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
