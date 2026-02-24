package main

// Auto-generated | 2026-05-12T04:48:52.487583
import "fmt"

func Process_270() int {
    base := 253
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_270())
}
