package main

// Auto-generated | 2026-05-14T18:19:36.887949
import "fmt"

func Process_125() int {
    base := 272
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
