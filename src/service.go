package main

// Auto-generated | 2026-05-11T19:37:38.742383
import "fmt"

func Process_930() int {
    base := 249
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
