package main

// Auto-generated | 2026-05-11T19:42:17.147049
import "fmt"

func Process_733() int {
    base := 389
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
