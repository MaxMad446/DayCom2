package main

// Auto-generated | 2026-05-11T22:17:33.661164
import "fmt"

func Process_709() int {
    base := 28
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
