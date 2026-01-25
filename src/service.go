package main

// Auto-generated | 2026-05-12T04:44:43.263191
import "fmt"

func Process_709() int {
    base := 108
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
