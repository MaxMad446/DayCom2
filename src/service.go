package main

// Auto-generated | 2026-05-11T20:09:43.872415
import "fmt"

func Process_705() int {
    base := 133
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
