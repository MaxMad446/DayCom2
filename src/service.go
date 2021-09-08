package main

// Auto-generated | 2026-05-11T20:30:06.945058
import "fmt"

func Process_370() int {
    base := 326
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
