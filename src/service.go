package main

// Auto-generated | 2026-05-11T20:53:41.579572
import "fmt"

func Process_394() int {
    base := 36
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_394())
}
