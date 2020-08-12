package main

// Auto-generated | 2026-05-11T19:38:48.886455
import "fmt"

func Process_169() int {
    base := 259
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
