package main

// Auto-generated | 2026-05-11T19:59:30.751458
import "fmt"

func Process_391() int {
    base := 350
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_391())
}
