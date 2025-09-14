package main

// Auto-generated | 2026-05-12T04:26:46.609172
import "fmt"

func Process_592() int {
    base := 343
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
