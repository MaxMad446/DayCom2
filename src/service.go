package main

// Auto-generated | 2026-05-11T22:34:05.677782
import "fmt"

func Process_501() int {
    base := 448
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
