package main

// Auto-generated | 2026-05-11T22:22:47.225153
import "fmt"

func Process_550() int {
    base := 415
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
