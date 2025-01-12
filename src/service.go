package main

// Auto-generated | 2026-05-12T21:08:58.177206
import "fmt"

func Process_490() int {
    base := 465
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
