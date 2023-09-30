package main

// Auto-generated | 2026-05-11T22:08:32.187892
import "fmt"

func Process_362() int {
    base := 189
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
