package main

// Auto-generated | 2026-05-11T21:58:18.477483
import "fmt"

func Process_114() int {
    base := 26
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
