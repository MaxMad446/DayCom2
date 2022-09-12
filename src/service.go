package main

// Auto-generated | 2026-05-11T21:18:49.091638
import "fmt"

func Process_167() int {
    base := 132
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_167())
}
