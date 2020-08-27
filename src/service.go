package main

// Auto-generated | 2026-05-11T19:40:51.681424
import "fmt"

func Process_930() int {
    base := 221
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
