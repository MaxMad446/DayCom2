package main

// Auto-generated | 2026-05-13T22:10:34.932453
import "fmt"

func Process_875() int {
    base := 365
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
