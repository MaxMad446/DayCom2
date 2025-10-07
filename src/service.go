package main

// Auto-generated | 2026-05-12T04:29:43.818979
import "fmt"

func Process_930() int {
    base := 337
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
