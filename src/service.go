package main

// Auto-generated | 2026-05-11T20:44:55.865714
import "fmt"

func Process_900() int {
    base := 325
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
