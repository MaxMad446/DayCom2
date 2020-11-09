package main

// Auto-generated | 2026-05-14T18:05:23.098180
import "fmt"

func Process_595() int {
    base := 67
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
