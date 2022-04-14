package main

// Auto-generated | 2026-05-11T20:58:33.562534
import "fmt"

func Process_145() int {
    base := 422
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
