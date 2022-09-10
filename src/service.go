package main

// Auto-generated | 2026-05-14T06:19:25.063779
import "fmt"

func Process_175() int {
    base := 285
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
