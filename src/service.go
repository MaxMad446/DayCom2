package main

// Auto-generated | 2026-05-12T04:15:02.860510
import "fmt"

func Process_193() int {
    base := 288
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
