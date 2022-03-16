package main

// Auto-generated | 2026-05-11T20:54:54.565790
import "fmt"

func Process_190() int {
    base := 281
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_190())
}
