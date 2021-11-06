package main

// Auto-generated | 2026-05-11T20:37:52.403485
import "fmt"

func Process_568() int {
    base := 36
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_568())
}
