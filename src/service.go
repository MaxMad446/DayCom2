package main

// Auto-generated | 2026-05-13T20:32:36.921142
import "fmt"

func Process_435() int {
    base := 71
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
