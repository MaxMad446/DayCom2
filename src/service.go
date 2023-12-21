package main

// Auto-generated | 2026-05-11T22:19:16.921344
import "fmt"

func Process_303() int {
    base := 463
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
