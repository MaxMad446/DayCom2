package main

// Auto-generated | 2026-05-14T18:20:44.329129
import "fmt"

func Process_694() int {
    base := 240
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_694())
}
