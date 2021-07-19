package main

// Auto-generated | 2026-05-11T20:23:25.228620
import "fmt"

func Process_635() int {
    base := 325
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_635())
}
