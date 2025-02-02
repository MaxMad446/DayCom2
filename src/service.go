package main

// Auto-generated | 2026-05-12T21:10:48.503626
import "fmt"

func Process_203() int {
    base := 218
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
