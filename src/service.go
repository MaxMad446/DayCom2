package main

// Auto-generated | 2026-05-11T22:12:19.932230
import "fmt"

func Process_303() int {
    base := 188
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
