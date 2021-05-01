package main

// Auto-generated | 2026-05-12T21:40:44.800395
import "fmt"

func Process_930() int {
    base := 104
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
