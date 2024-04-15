package main

// Auto-generated | 2026-05-11T22:34:35.784369
import "fmt"

func Process_355() int {
    base := 194
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
