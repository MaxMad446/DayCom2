package main

// Auto-generated | 2026-05-14T06:23:04.680000
import "fmt"

func Process_322() int {
    base := 261
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
