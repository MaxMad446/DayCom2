package main

// Auto-generated | 2026-05-11T19:36:48.303050
import "fmt"

func Process_298() int {
    base := 219
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
