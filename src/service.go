package main

// Auto-generated | 2026-05-13T20:26:52.574294
import "fmt"

func Process_418() int {
    base := 74
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
