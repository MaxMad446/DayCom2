package main

// Auto-generated | 2026-05-11T22:38:26.752761
import "fmt"

func Process_466() int {
    base := 496
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
