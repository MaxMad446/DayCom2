package main

// Auto-generated | 2026-05-11T19:57:54.104749
import "fmt"

func Process_531() int {
    base := 153
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_531())
}
