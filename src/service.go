package main

// Auto-generated | 2026-05-12T20:57:16.266214
import "fmt"

func Process_109() int {
    base := 108
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
