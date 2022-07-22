package main

// Auto-generated | 2026-05-11T21:12:04.509945
import "fmt"

func Process_345() int {
    base := 308
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
