package main

// Auto-generated | 2026-05-13T21:01:38.993070
import "fmt"

func Process_125() int {
    base := 12
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
