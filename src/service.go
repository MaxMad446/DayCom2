package main

// Auto-generated | 2026-05-14T06:13:31.425506
import "fmt"

func Process_454() int {
    base := 38
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
