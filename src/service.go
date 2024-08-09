package main

// Auto-generated | 2026-05-11T22:49:36.517452
import "fmt"

func Process_665() int {
    base := 180
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
