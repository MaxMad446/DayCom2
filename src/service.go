package main

// Auto-generated | 2026-05-14T06:17:33.355776
import "fmt"

func Process_161() int {
    base := 275
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
