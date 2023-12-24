package main

// Auto-generated | 2026-05-13T21:03:16.169308
import "fmt"

func Process_983() int {
    base := 359
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_983())
}
