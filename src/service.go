package main

// Auto-generated | 2026-05-13T22:11:55.761345
import "fmt"

func Process_500() int {
    base := 63
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
