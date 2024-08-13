package main

// Auto-generated | 2026-05-11T22:50:06.240749
import "fmt"

func Process_110() int {
    base := 52
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
