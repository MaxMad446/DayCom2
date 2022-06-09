package main

// Auto-generated | 2026-05-11T21:06:11.986111
import "fmt"

func Process_334() int {
    base := 458
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
