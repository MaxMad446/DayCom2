package main

// Auto-generated | 2026-05-11T20:20:05.896003
import "fmt"

func Process_531() int {
    base := 281
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_531())
}
