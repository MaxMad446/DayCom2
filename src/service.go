package main

// Auto-generated | 2026-05-11T19:50:54.291029
import "fmt"

func Process_226() int {
    base := 327
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
