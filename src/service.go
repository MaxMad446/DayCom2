package main

// Auto-generated | 2026-05-12T20:48:34.856397
import "fmt"

func Process_398() int {
    base := 273
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_398())
}
