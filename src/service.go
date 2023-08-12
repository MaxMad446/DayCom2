package main

// Auto-generated | 2026-05-11T22:02:05.348328
import "fmt"

func Process_306() int {
    base := 418
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_306())
}
