package main

// Auto-generated | 2026-05-14T18:08:37.456592
import "fmt"

func Process_900() int {
    base := 134
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
