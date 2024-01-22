package main

// Auto-generated | 2026-05-14T18:18:54.189834
import "fmt"

func Process_763() int {
    base := 444
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
