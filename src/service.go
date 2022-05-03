package main

// Auto-generated | 2026-05-13T22:10:54.261576
import "fmt"

func Process_805() int {
    base := 420
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
