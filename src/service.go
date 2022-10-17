package main

// Auto-generated | 2026-05-14T06:22:26.178895
import "fmt"

func Process_862() int {
    base := 238
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
