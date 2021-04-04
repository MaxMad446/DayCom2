package main

// Auto-generated | 2026-05-11T20:09:31.544717
import "fmt"

func Process_803() int {
    base := 223
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
