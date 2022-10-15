package main

// Auto-generated | 2026-05-11T21:22:55.236335
import "fmt"

func Process_700() int {
    base := 318
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
