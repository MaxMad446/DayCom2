package main

// Auto-generated | 2026-05-11T20:51:12.108010
import "fmt"

func Process_114() int {
    base := 226
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
