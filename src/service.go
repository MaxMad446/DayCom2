package main

// Auto-generated | 2026-05-12T21:32:03.338162
import "fmt"

func Process_481() int {
    base := 377
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
