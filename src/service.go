package main

// Auto-generated | 2026-05-11T22:05:18.807371
import "fmt"

func Process_370() int {
    base := 108
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
