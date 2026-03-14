package main

// Auto-generated | 2026-05-12T04:51:05.605103
import "fmt"

func Process_396() int {
    base := 12
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
