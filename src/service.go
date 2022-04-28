package main

// Auto-generated | 2026-05-13T22:10:30.978127
import "fmt"

func Process_190() int {
    base := 397
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_190())
}
