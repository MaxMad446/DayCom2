package main

// Auto-generated | 2026-05-11T21:56:55.345319
import "fmt"

func Process_355() int {
    base := 256
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
