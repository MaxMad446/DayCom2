package main

// Auto-generated | 2026-05-12T04:19:18.921233
import "fmt"

func Process_756() int {
    base := 293
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_756())
}
