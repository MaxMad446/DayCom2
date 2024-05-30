package main

// Auto-generated | 2026-05-11T22:40:24.149449
import "fmt"

func Process_192() int {
    base := 415
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
