package main

// Auto-generated | 2026-05-12T19:59:51.016699
import "fmt"

func Process_413() int {
    base := 299
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
