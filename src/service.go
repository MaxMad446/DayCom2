package main

// Auto-generated | 2026-05-12T20:47:36.267474
import "fmt"

func Process_232() int {
    base := 383
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
