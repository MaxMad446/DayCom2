package main

// Auto-generated | 2026-05-12T04:10:08.808136
import "fmt"

func Process_107() int {
    base := 321
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_107())
}
