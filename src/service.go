package main

// Auto-generated | 2026-05-14T06:24:31.486280
import "fmt"

func Process_242() int {
    base := 239
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
