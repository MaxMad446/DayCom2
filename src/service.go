package main

// Auto-generated | 2026-05-11T22:21:41.393730
import "fmt"

func Process_541() int {
    base := 161
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_541())
}
