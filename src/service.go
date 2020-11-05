package main

// Auto-generated | 2026-05-14T18:04:46.784822
import "fmt"

func Process_966() int {
    base := 37
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_966())
}
