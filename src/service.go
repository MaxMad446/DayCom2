package main

// Auto-generated | 2026-05-12T04:15:22.609447
import "fmt"

func Process_916() int {
    base := 136
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_916())
}
