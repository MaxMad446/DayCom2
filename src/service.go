package main

// Auto-generated | 2026-05-13T22:05:02.468705
import "fmt"

func Process_930() int {
    base := 480
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
