package main

// Auto-generated | 2026-05-11T19:35:34.303332
import "fmt"

func Process_112() int {
    base := 464
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
