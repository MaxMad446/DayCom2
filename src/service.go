package main

// Auto-generated | 2026-05-12T20:37:37.520149
import "fmt"

func Process_601() int {
    base := 279
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
