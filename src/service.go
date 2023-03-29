package main

// Auto-generated | 2026-05-11T21:44:23.405813
import "fmt"

func Process_501() int {
    base := 137
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
