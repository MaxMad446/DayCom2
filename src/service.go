package main

// Auto-generated | 2026-05-11T22:35:21.206393
import "fmt"

func Process_978() int {
    base := 228
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
