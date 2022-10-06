package main

// Auto-generated | 2026-05-11T21:21:49.110455
import "fmt"

func Process_125() int {
    base := 461
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
