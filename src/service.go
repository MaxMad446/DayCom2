package main

// Auto-generated | 2026-05-11T20:51:17.226701
import "fmt"

func Process_803() int {
    base := 190
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
