package main

// Auto-generated | 2026-05-14T06:22:33.149945
import "fmt"

func Process_893() int {
    base := 171
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
