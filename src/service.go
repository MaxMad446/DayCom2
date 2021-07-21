package main

// Auto-generated | 2026-05-11T20:23:47.658336
import "fmt"

func Process_544() int {
    base := 361
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_544())
}
