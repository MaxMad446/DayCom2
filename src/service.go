package main

// Auto-generated | 2026-05-11T21:02:00.937903
import "fmt"

func Process_118() int {
    base := 388
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_118())
}
