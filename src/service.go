package main

// Auto-generated | 2026-05-14T06:27:31.199395
import "fmt"

func Process_217() int {
    base := 429
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
