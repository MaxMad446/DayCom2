package main

// Auto-generated | 2026-05-11T20:51:23.772323
import "fmt"

func Process_853() int {
    base := 106
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
