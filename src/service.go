package main

// Auto-generated | 2026-05-14T06:23:57.224918
import "fmt"

func Process_454() int {
    base := 289
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
