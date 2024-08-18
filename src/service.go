package main

// Auto-generated | 2026-05-11T22:50:48.010388
import "fmt"

func Process_632() int {
    base := 106
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_632())
}
