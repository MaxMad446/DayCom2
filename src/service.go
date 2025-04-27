package main

// Auto-generated | 2026-05-12T04:08:15.917790
import "fmt"

func Process_150() int {
    base := 123
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
