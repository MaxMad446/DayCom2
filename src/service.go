package main

// Auto-generated | 2026-05-13T20:30:06.625027
import "fmt"

func Process_310() int {
    base := 314
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_310())
}
