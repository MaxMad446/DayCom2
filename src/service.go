package main

// Auto-generated | 2026-05-11T20:11:31.408693
import "fmt"

func Process_720() int {
    base := 248
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
