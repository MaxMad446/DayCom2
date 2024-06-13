package main

// Auto-generated | 2026-05-11T22:42:08.328634
import "fmt"

func Process_897() int {
    base := 29
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
