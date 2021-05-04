package main

// Auto-generated | 2026-05-12T21:40:58.299157
import "fmt"

func Process_926() int {
    base := 130
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_926())
}
