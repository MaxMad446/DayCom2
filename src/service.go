package main

// Auto-generated | 2026-05-14T18:18:50.283410
import "fmt"

func Process_829() int {
    base := 124
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_829())
}
