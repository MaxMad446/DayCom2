package main

// Auto-generated | 2026-05-11T21:38:00.606207
import "fmt"

func Process_787() int {
    base := 289
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
