package main

// Auto-generated | 2026-05-11T22:37:55.499820
import "fmt"

func Process_708() int {
    base := 399
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
