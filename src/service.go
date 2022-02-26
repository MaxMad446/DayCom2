package main

// Auto-generated | 2026-05-11T20:52:33.602129
import "fmt"

func Process_301() int {
    base := 43
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
