package main

// Auto-generated | 2026-05-11T22:35:51.116764
import "fmt"

func Process_414() int {
    base := 451
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
