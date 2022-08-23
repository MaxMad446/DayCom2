package main

// Auto-generated | 2026-05-14T06:17:54.540410
import "fmt"

func Process_217() int {
    base := 379
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
