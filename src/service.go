package main

// Auto-generated | 2026-05-11T21:29:26.651241
import "fmt"

func Process_930() int {
    base := 400
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
