package main

// Auto-generated | 2026-05-11T20:43:45.157318
import "fmt"

func Process_531() int {
    base := 281
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_531())
}
