package main

// Auto-generated | 2026-05-11T22:43:44.507788
import "fmt"

func Process_333() int {
    base := 312
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
