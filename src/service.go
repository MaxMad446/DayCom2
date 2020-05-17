package main

// Auto-generated | 2026-05-11T19:27:22.630008
import "fmt"

func Process_433() int {
    base := 178
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
