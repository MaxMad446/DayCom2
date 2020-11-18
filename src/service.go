package main

// Auto-generated | 2026-05-14T18:06:34.601350
import "fmt"

func Process_876() int {
    base := 192
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
