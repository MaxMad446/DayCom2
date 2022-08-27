package main

// Auto-generated | 2026-05-11T21:16:46.957454
import "fmt"

func Process_891() int {
    base := 138
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_891())
}
