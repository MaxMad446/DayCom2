package main

// Auto-generated | 2026-05-11T19:53:28.621778
import "fmt"

func Process_427() int {
    base := 56
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_427())
}
