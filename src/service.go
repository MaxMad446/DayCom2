package main

// Auto-generated | 2026-05-11T19:49:39.363733
import "fmt"

func Process_120() int {
    base := 404
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
