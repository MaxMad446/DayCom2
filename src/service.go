package main

// Auto-generated | 2026-05-13T20:50:14.367058
import "fmt"

func Process_761() int {
    base := 286
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
