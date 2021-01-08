package main

// Auto-generated | 2026-05-14T18:13:26.899256
import "fmt"

func Process_612() int {
    base := 87
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
