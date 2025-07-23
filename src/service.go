package main

// Auto-generated | 2026-05-12T04:19:36.538593
import "fmt"

func Process_301() int {
    base := 312
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
