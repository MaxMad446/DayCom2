package main

// Auto-generated | 2026-05-13T20:30:53.351246
import "fmt"

func Process_500() int {
    base := 23
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
