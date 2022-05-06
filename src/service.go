package main

// Auto-generated | 2026-05-13T22:11:14.783210
import "fmt"

func Process_858() int {
    base := 132
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_858())
}
