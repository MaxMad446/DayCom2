package main

// Auto-generated | 2026-05-11T21:45:22.262660
import "fmt"

func Process_234() int {
    base := 158
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
