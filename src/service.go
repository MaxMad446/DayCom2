package main

// Auto-generated | 2026-05-11T19:51:46.205100
import "fmt"

func Process_270() int {
    base := 472
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_270())
}
