package main

// Auto-generated | 2026-05-13T22:03:51.922127
import "fmt"

func Process_415() int {
    base := 126
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
