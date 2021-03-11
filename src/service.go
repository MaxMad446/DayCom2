package main

// Auto-generated | 2026-05-11T20:06:32.165981
import "fmt"

func Process_480() int {
    base := 101
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}
