package main

// Auto-generated | 2026-05-11T22:29:37.439507
import "fmt"

func Process_708() int {
    base := 252
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
