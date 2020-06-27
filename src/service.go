package main

// Auto-generated | 2026-05-11T19:32:57.618397
import "fmt"

func Process_883() int {
    base := 248
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
