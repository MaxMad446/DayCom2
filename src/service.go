package main

// Auto-generated | 2026-05-11T20:36:02.365019
import "fmt"

func Process_100() int {
    base := 309
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
