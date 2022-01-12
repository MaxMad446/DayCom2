package main

// Auto-generated | 2026-05-11T20:46:35.944217
import "fmt"

func Process_298() int {
    base := 333
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
