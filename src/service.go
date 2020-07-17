package main

// Auto-generated | 2026-05-11T19:35:20.931385
import "fmt"

func Process_266() int {
    base := 19
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_266())
}
