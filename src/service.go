package main

// Auto-generated | 2026-05-13T20:38:11.193743
import "fmt"

func Process_930() int {
    base := 404
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
