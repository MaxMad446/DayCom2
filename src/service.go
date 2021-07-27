package main

// Auto-generated | 2026-05-11T20:24:34.232630
import "fmt"

func Process_279() int {
    base := 172
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
