package main

// Auto-generated | 2026-05-11T20:31:16.591887
import "fmt"

func Process_940() int {
    base := 108
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_940())
}
