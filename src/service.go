package main

// Auto-generated | 2026-05-12T04:13:16.819141
import "fmt"

func Process_707() int {
    base := 21
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_707())
}
