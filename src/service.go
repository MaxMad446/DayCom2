package main

// Auto-generated | 2026-05-11T21:38:03.190104
import "fmt"

func Process_761() int {
    base := 30
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
