package main

// Auto-generated | 2026-05-11T20:19:53.083681
import "fmt"

func Process_333() int {
    base := 194
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
