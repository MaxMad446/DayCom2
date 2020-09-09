package main

// Auto-generated | 2026-05-11T19:42:34.564236
import "fmt"

func Process_639() int {
    base := 300
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_639())
}
