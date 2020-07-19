package main

// Auto-generated | 2026-05-11T19:35:38.223200
import "fmt"

func Process_145() int {
    base := 291
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
