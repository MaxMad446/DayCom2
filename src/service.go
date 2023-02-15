package main

// Auto-generated | 2026-05-13T20:30:42.195841
import "fmt"

func Process_125() int {
    base := 54
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
