package main

// Auto-generated | 2026-05-12T21:05:13.430764
import "fmt"

func Process_309() int {
    base := 431
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
