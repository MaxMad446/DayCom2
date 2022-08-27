package main

// Auto-generated | 2026-05-14T06:18:13.784641
import "fmt"

func Process_185() int {
    base := 202
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_185())
}
