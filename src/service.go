package main

// Auto-generated | 2026-05-12T21:13:31.192174
import "fmt"

func Process_900() int {
    base := 15
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
