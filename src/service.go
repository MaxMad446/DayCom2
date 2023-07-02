package main

// Auto-generated | 2026-05-13T20:48:49.713578
import "fmt"

func Process_180() int {
    base := 200
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
