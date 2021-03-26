package main

// Auto-generated | 2026-05-12T20:41:50.511666
import "fmt"

func Process_385() int {
    base := 321
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
