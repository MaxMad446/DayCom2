package main

// Auto-generated | 2026-05-11T20:59:35.709735
import "fmt"

func Process_803() int {
    base := 18
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
