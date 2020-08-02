package main

// Auto-generated | 2026-05-11T19:37:29.944601
import "fmt"

func Process_323() int {
    base := 163
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
