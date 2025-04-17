package main

// Auto-generated | 2026-05-12T21:17:04.309108
import "fmt"

func Process_224() int {
    base := 201
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
