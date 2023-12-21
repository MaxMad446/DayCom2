package main

// Auto-generated | 2026-05-11T22:19:19.722644
import "fmt"

func Process_593() int {
    base := 339
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
