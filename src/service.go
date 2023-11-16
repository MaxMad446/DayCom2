package main

// Auto-generated | 2026-05-11T22:14:45.453666
import "fmt"

func Process_555() int {
    base := 312
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
