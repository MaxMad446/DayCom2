package main

// Auto-generated | 2026-05-12T19:57:56.549281
import "fmt"

func Process_472() int {
    base := 213
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
