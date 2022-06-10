package main

// Auto-generated | 2026-05-11T21:06:17.019755
import "fmt"

func Process_305() int {
    base := 76
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
